#include <sun/rmi/transport/ConnectionOutputStream.h>
#include <java/io/DataOutput.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/rmi/server/UID.h>
#include <sun/rmi/server/MarshalOutputStream.h>
#include <sun/rmi/transport/Connection.h>
#include <sun/rmi/transport/DGCAckHandler.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UID = ::java::rmi::server::UID;
using $MarshalOutputStream = ::sun::rmi::server::MarshalOutputStream;
using $Connection = ::sun::rmi::transport::Connection;
using $DGCAckHandler = ::sun::rmi::transport::DGCAckHandler;

namespace sun {
	namespace rmi {
		namespace transport {

bool ConnectionOutputStream::$assertionsDisabled = false;

void ConnectionOutputStream::init$($Connection* conn, bool resultStream) {
	$MarshalOutputStream::init$($($nc(conn)->getOutputStream()));
	$set(this, dgcAckHandler, nullptr);
	$set(this, conn, conn);
	this->resultStream = resultStream;
	$set(this, ackID, resultStream ? $new($UID) : ($UID*)nullptr);
}

void ConnectionOutputStream::writeID() {
	if (!ConnectionOutputStream::$assertionsDisabled && !this->resultStream) {
		$throwNew($AssertionError);
	}
	$nc(this->ackID)->write(this);
}

bool ConnectionOutputStream::isResultStream() {
	return this->resultStream;
}

void ConnectionOutputStream::saveObject(Object$* obj) {
	if (this->dgcAckHandler == nullptr) {
		$set(this, dgcAckHandler, $new($DGCAckHandler, this->ackID));
	}
	$nc(this->dgcAckHandler)->add(obj);
}

$DGCAckHandler* ConnectionOutputStream::getDGCAckHandler() {
	return this->dgcAckHandler;
}

void ConnectionOutputStream::done() {
	if (this->dgcAckHandler != nullptr) {
		this->dgcAckHandler->startTimer();
	}
}

void ConnectionOutputStream::clinit$($Class* clazz) {
	ConnectionOutputStream::$assertionsDisabled = !ConnectionOutputStream::class$->desiredAssertionStatus();
}

ConnectionOutputStream::ConnectionOutputStream() {
}

$Class* ConnectionOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ConnectionOutputStream, $assertionsDisabled)},
		{"conn", "Lsun/rmi/transport/Connection;", nullptr, $PRIVATE | $FINAL, $field(ConnectionOutputStream, conn)},
		{"resultStream", "Z", nullptr, $PRIVATE | $FINAL, $field(ConnectionOutputStream, resultStream)},
		{"ackID", "Ljava/rmi/server/UID;", nullptr, $PRIVATE | $FINAL, $field(ConnectionOutputStream, ackID)},
		{"dgcAckHandler", "Lsun/rmi/transport/DGCAckHandler;", nullptr, $PRIVATE, $field(ConnectionOutputStream, dgcAckHandler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/transport/Connection;Z)V", nullptr, 0, $method(ConnectionOutputStream, init$, void, $Connection*, bool), "java.io.IOException"},
		{"done", "()V", nullptr, 0, $virtualMethod(ConnectionOutputStream, done, void)},
		{"getDGCAckHandler", "()Lsun/rmi/transport/DGCAckHandler;", nullptr, 0, $virtualMethod(ConnectionOutputStream, getDGCAckHandler, $DGCAckHandler*)},
		{"isResultStream", "()Z", nullptr, 0, $virtualMethod(ConnectionOutputStream, isResultStream, bool)},
		{"saveObject", "(Ljava/lang/Object;)V", nullptr, 0, $virtualMethod(ConnectionOutputStream, saveObject, void, Object$*)},
		{"writeID", "()V", nullptr, 0, $virtualMethod(ConnectionOutputStream, writeID, void), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.transport.ConnectionOutputStream",
		"sun.rmi.server.MarshalOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ConnectionOutputStream, name, initialize, &classInfo$$, ConnectionOutputStream::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ConnectionOutputStream));
	});
	return class$;
}

$Class* ConnectionOutputStream::class$ = nullptr;

		} // transport
	} // rmi
} // sun