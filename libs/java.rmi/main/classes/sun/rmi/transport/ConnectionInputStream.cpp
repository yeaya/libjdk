#include <sun/rmi/transport/ConnectionInputStream.h>
#include <java/io/DataInput.h>
#include <java/io/DataOutput.h>
#include <java/io/DataOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/rmi/RemoteException.h>
#include <java/rmi/server/UID.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log.h>
#include <sun/rmi/server/MarshalInputStream.h>
#include <sun/rmi/transport/Channel.h>
#include <sun/rmi/transport/Connection.h>
#include <sun/rmi/transport/DGCClient.h>
#include <sun/rmi/transport/DGCImpl.h>
#include <sun/rmi/transport/Endpoint.h>
#include <sun/rmi/transport/LiveRef.h>
#include <sun/rmi/transport/TransportConstants.h>
#include <jcpp.h>

#undef VERBOSE

using $DataInput = ::java::io::DataInput;
using $DataOutput = ::java::io::DataOutput;
using $DataOutputStream = ::java::io::DataOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteException = ::java::rmi::RemoteException;
using $UID = ::java::rmi::server::UID;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $Log = ::sun::rmi::runtime::Log;
using $MarshalInputStream = ::sun::rmi::server::MarshalInputStream;
using $Channel = ::sun::rmi::transport::Channel;
using $Connection = ::sun::rmi::transport::Connection;
using $DGCClient = ::sun::rmi::transport::DGCClient;
using $DGCImpl = ::sun::rmi::transport::DGCImpl;
using $Endpoint = ::sun::rmi::transport::Endpoint;
using $LiveRef = ::sun::rmi::transport::LiveRef;
using $TransportConstants = ::sun::rmi::transport::TransportConstants;

namespace sun {
	namespace rmi {
		namespace transport {

void ConnectionInputStream::init$($InputStream* in) {
	$MarshalInputStream::init$(in);
	this->dgcAckNeeded = false;
	$set(this, incomingRefTable, $new($HashMap, 5));
}

void ConnectionInputStream::readID() {
	$set(this, ackID, $UID::read($cast($DataInput, this)));
}

void ConnectionInputStream::saveRef($LiveRef* ref) {
	$useLocalObjectStack();
	$var($Endpoint, ep, $nc(ref)->getEndpoint());
	$var($List, refList, $cast($List, $nc(this->incomingRefTable)->get(ep)));
	if (refList == nullptr) {
		$assign(refList, $new($ArrayList));
		this->incomingRefTable->put(ep, refList);
	}
	$nc(refList)->add(ref);
}

void ConnectionInputStream::discardRefs() {
	$nc(this->incomingRefTable)->clear();
}

void ConnectionInputStream::registerRefs() {
	$useLocalObjectStack();
	if (!$nc(this->incomingRefTable)->isEmpty()) {
		$var($Iterator, i$, $$nc(this->incomingRefTable->entrySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($Endpoint, var$0, $cast($Endpoint, $nc(entry)->getKey()));
				$DGCClient::registerRefs(var$0, $$cast($List, entry->getValue()));
			}
		}
	}
}

void ConnectionInputStream::setAckNeeded() {
	this->dgcAckNeeded = true;
}

void ConnectionInputStream::done($Connection* c) {
	$useLocalObjectStack();
	if (this->dgcAckNeeded) {
		$var($Connection, conn, nullptr);
		$var($Channel, ch, nullptr);
		bool reuse = true;
		$init($DGCImpl);
		$init($Log);
		$nc($DGCImpl::dgcLog)->log($Log::VERBOSE, "send ack"_s);
		try {
			$assign(ch, $nc(c)->getChannel());
			$assign(conn, $nc(ch)->newConnection());
			$var($DataOutputStream, out, $new($DataOutputStream, $($nc(conn)->getOutputStream())));
			out->writeByte($TransportConstants::DGCAck);
			if (this->ackID == nullptr) {
				$set(this, ackID, $new($UID));
			}
			$nc(this->ackID)->write($cast($DataOutput, out));
			conn->releaseOutputStream();
			$$nc(conn->getInputStream())->available();
			conn->releaseInputStream();
		} catch ($RemoteException& e) {
			reuse = false;
		} catch ($IOException& e) {
			reuse = false;
		}
		try {
			if (conn != nullptr) {
				$nc(ch)->free(conn, reuse);
			}
		} catch ($RemoteException& e) {
		}
	}
}

ConnectionInputStream::ConnectionInputStream() {
}

$Class* ConnectionInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dgcAckNeeded", "Z", nullptr, $PRIVATE, $field(ConnectionInputStream, dgcAckNeeded)},
		{"incomingRefTable", "Ljava/util/Map;", "Ljava/util/Map<Lsun/rmi/transport/Endpoint;Ljava/util/List<Lsun/rmi/transport/LiveRef;>;>;", $PRIVATE, $field(ConnectionInputStream, incomingRefTable)},
		{"ackID", "Ljava/rmi/server/UID;", nullptr, $PRIVATE, $field(ConnectionInputStream, ackID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, 0, $method(ConnectionInputStream, init$, void, $InputStream*), "java.io.IOException"},
		{"discardRefs", "()V", nullptr, 0, $virtualMethod(ConnectionInputStream, discardRefs, void)},
		{"done", "(Lsun/rmi/transport/Connection;)V", nullptr, 0, $virtualMethod(ConnectionInputStream, done, void, $Connection*)},
		{"readID", "()V", nullptr, 0, $virtualMethod(ConnectionInputStream, readID, void), "java.io.IOException"},
		{"registerRefs", "()V", nullptr, 0, $virtualMethod(ConnectionInputStream, registerRefs, void), "java.io.IOException"},
		{"saveRef", "(Lsun/rmi/transport/LiveRef;)V", nullptr, 0, $virtualMethod(ConnectionInputStream, saveRef, void, $LiveRef*)},
		{"setAckNeeded", "()V", nullptr, 0, $virtualMethod(ConnectionInputStream, setAckNeeded, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.ConnectionInputStream",
		"sun.rmi.server.MarshalInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectionInputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConnectionInputStream));
	});
	return class$;
}

$Class* ConnectionInputStream::class$ = nullptr;

		} // transport
	} // rmi
} // sun