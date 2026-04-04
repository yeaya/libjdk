#include <javax/management/remote/rmi/RMIConnector.h>
#include <com/sun/jmx/remote/internal/ClientCommunicatorAdmin.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <com/sun/jmx/remote/util/EnvHelp.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Proxy.h>
#include <java/net/MalformedURLException.h>
#include <java/rmi/MarshalledObject.h>
#include <java/rmi/NoSuchObjectException.h>
#include <java/rmi/Remote.h>
#include <java/rmi/RemoteException.h>
#include <java/rmi/server/RMIClientSocketFactory.h>
#include <java/rmi/server/RemoteObject.h>
#include <java/rmi/server/RemoteObjectInvocationHandler.h>
#include <java/rmi/server/RemoteRef.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/management/Attribute.h>
#include <javax/management/AttributeList.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationBroadcasterSupport.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <javax/management/remote/JMXConnectionNotification.h>
#include <javax/management/remote/JMXConnector.h>
#include <javax/management/remote/JMXConnectorFactory.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <javax/management/remote/rmi/NoCallStackClassLoader.h>
#include <javax/management/remote/rmi/RMIConnection.h>
#include <javax/management/remote/rmi/RMIConnector$1.h>
#include <javax/management/remote/rmi/RMIConnector$2.h>
#include <javax/management/remote/rmi/RMIConnector$3.h>
#include <javax/management/remote/rmi/RMIConnector$ObjectInputStreamWithLoader.h>
#include <javax/management/remote/rmi/RMIConnector$RMIClientCommunicatorAdmin.h>
#include <javax/management/remote/rmi/RMIConnector$RMINotifClient.h>
#include <javax/management/remote/rmi/RMIConnector$RemoteMBeanServerConnection.h>
#include <javax/management/remote/rmi/RMIConnector$Util.h>
#include <javax/management/remote/rmi/RMIServer.h>
#include <javax/naming/InitialContext.h>
#include <javax/naming/NamingException.h>
#include <javax/rmi/ssl/SslRMIClientSocketFactory.h>
#include <javax/security/auth/Subject.h>
#include <sun/rmi/server/UnicastRef2.h>
#include <sun/rmi/transport/LiveRef.h>
#include <jcpp.h>

#undef CLOSED
#undef CREDENTIALS
#undef DEFAULT_CLASS_LOADER
#undef OPENED

using $IntegerArray = $Array<::java::lang::Integer>;
using $MarshalledObjectArray = $Array<::java::rmi::MarshalledObject>;
using $ObjectNameArray = $Array<::javax::management::ObjectName>;
using $SubjectArray = $Array<::javax::security::auth::Subject>;
using $ClassLogger = ::com::sun::jmx::remote::util::ClassLogger;
using $EnvHelp = ::com::sun::jmx::remote::util::EnvHelp;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Proxy = ::java::lang::reflect::Proxy;
using $MalformedURLException = ::java::net::MalformedURLException;
using $MarshalledObject = ::java::rmi::MarshalledObject;
using $NoSuchObjectException = ::java::rmi::NoSuchObjectException;
using $Remote = ::java::rmi::Remote;
using $RemoteException = ::java::rmi::RemoteException;
using $RMIClientSocketFactory = ::java::rmi::server::RMIClientSocketFactory;
using $RemoteObject = ::java::rmi::server::RemoteObject;
using $RemoteObjectInvocationHandler = ::java::rmi::server::RemoteObjectInvocationHandler;
using $RemoteRef = ::java::rmi::server::RemoteRef;
using $AccessController = ::java::security::AccessController;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $Attribute = ::javax::management::Attribute;
using $AttributeList = ::javax::management::AttributeList;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $Notification = ::javax::management::Notification;
using $NotificationBroadcasterSupport = ::javax::management::NotificationBroadcasterSupport;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;
using $JMXConnectionNotification = ::javax::management::remote::JMXConnectionNotification;
using $JMXConnector = ::javax::management::remote::JMXConnector;
using $JMXConnectorFactory = ::javax::management::remote::JMXConnectorFactory;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;
using $NoCallStackClassLoader = ::javax::management::remote::rmi::NoCallStackClassLoader;
using $RMIConnection = ::javax::management::remote::rmi::RMIConnection;
using $RMIConnector$1 = ::javax::management::remote::rmi::RMIConnector$1;
using $RMIConnector$2 = ::javax::management::remote::rmi::RMIConnector$2;
using $RMIConnector$3 = ::javax::management::remote::rmi::RMIConnector$3;
using $RMIConnector$ObjectInputStreamWithLoader = ::javax::management::remote::rmi::RMIConnector$ObjectInputStreamWithLoader;
using $RMIConnector$RMIClientCommunicatorAdmin = ::javax::management::remote::rmi::RMIConnector$RMIClientCommunicatorAdmin;
using $RMIConnector$RMINotifClient = ::javax::management::remote::rmi::RMIConnector$RMINotifClient;
using $RMIConnector$RemoteMBeanServerConnection = ::javax::management::remote::rmi::RMIConnector$RemoteMBeanServerConnection;
using $RMIConnector$Util = ::javax::management::remote::rmi::RMIConnector$Util;
using $RMIServer = ::javax::management::remote::rmi::RMIServer;
using $InitialContext = ::javax::naming::InitialContext;
using $NamingException = ::javax::naming::NamingException;
using $SslRMIClientSocketFactory = ::javax::rmi::ssl::SslRMIClientSocketFactory;
using $Subject = ::javax::security::auth::Subject;
using $UnicastRef2 = ::sun::rmi::server::UnicastRef2;
using $LiveRef = ::sun::rmi::transport::LiveRef;

namespace javax {
	namespace management {
		namespace remote {
			namespace rmi {

class RMIConnector$$Lambda$getName : public $Function {
	$class(RMIConnector$$Lambda$getName, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Attribute, inst$)->getName());
	}
};
$Class* RMIConnector$$Lambda$getName::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RMIConnector$$Lambda$getName, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RMIConnector$$Lambda$getName, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.management.remote.rmi.RMIConnector$$Lambda$getName",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(RMIConnector$$Lambda$getName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RMIConnector$$Lambda$getName);
	});
	return class$;
}
$Class* RMIConnector$$Lambda$getName::class$ = nullptr;

int32_t RMIConnector::hashCode() {
	 return this->$JMXConnector::hashCode();
}

bool RMIConnector::equals(Object$* arg0) {
	 return this->$JMXConnector::equals(arg0);
}

$Object* RMIConnector::clone() {
	 return this->$JMXConnector::clone();
}

void RMIConnector::finalize() {
	this->$JMXConnector::finalize();
}

$ClassLogger* RMIConnector::logger = nullptr;
$String* RMIConnector::rmiServerImplStubClassName = nullptr;
$Class* RMIConnector::rmiServerImplStubClass = nullptr;
$String* RMIConnector::rmiConnectionImplStubClassName = nullptr;
$Class* RMIConnector::rmiConnectionImplStubClass = nullptr;
$String* RMIConnector::pRefClassName = nullptr;
$Constructor* RMIConnector::proxyRefConstructor = nullptr;
$bytes* RMIConnector::base64ToInt = nullptr;
$volatile($WeakReference*) RMIConnector::orb = nullptr;

void RMIConnector::init$($RMIServer* rmiServer, $JMXServiceURL* address, $Map* environment) {
	this->clientNotifSeqNo = 0;
	$set(this, nullSubjectConnRef, nullptr);
	this->clientNotifCounter = 0;
	if (rmiServer == nullptr && address == nullptr) {
		$throwNew($IllegalArgumentException, "rmiServer and jmxServiceURL both null"_s);
	}
	initTransients();
	$set(this, rmiServer, rmiServer);
	$set(this, jmxServiceURL, address);
	if (environment == nullptr) {
		$set(this, env, $Collections::emptyMap());
	} else {
		$EnvHelp::checkAttributes(environment);
		$set(this, env, $Collections::unmodifiableMap(environment));
	}
}

void RMIConnector::init$($JMXServiceURL* url, $Map* environment) {
	RMIConnector::init$(nullptr, url, environment);
}

void RMIConnector::init$($RMIServer* rmiServer, $Map* environment) {
	RMIConnector::init$(rmiServer, nullptr, environment);
}

$String* RMIConnector::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, b, $new($StringBuilder, $($of(this)->getClass()->getName())));
	b->append(":"_s);
	if (this->rmiServer != nullptr) {
		b->append(" rmiServer="_s)->append($(this->rmiServer->toString()));
	}
	if (this->jmxServiceURL != nullptr) {
		if (this->rmiServer != nullptr) {
			b->append(","_s);
		}
		b->append(" jmxServiceURL="_s)->append($(this->jmxServiceURL->toString()));
	}
	return b->toString();
}

$JMXServiceURL* RMIConnector::getAddress() {
	return this->jmxServiceURL;
}

void RMIConnector::connect() {
	connect(nullptr);
}

void RMIConnector::connect($Map* environment) {
	$synchronized(this) {
		$useLocalObjectStack();
		bool tracing = RMIConnector::logger->traceOn();
		$var($String, idstr, tracing ? $str({"["_s, $(this->toString()), "]"_s}) : ($String*)nullptr);
		if (this->terminated) {
			RMIConnector::logger->trace("connect"_s, $$str({idstr, " already closed."_s}));
			$throwNew($IOException, "Connector closed"_s);
		}
		if (this->connected) {
			RMIConnector::logger->trace("connect"_s, $$str({idstr, " already connected."_s}));
			return;
		}
		try {
			if (tracing) {
				RMIConnector::logger->trace("connect"_s, $$str({idstr, " connecting..."_s}));
			}
			$var($Map, usemap, $new($HashMap, (this->env == nullptr) ? $($Collections::emptyMap()) : this->env));
			if (environment != nullptr) {
				$EnvHelp::checkAttributes(environment);
				usemap->putAll(environment);
			}
			if (tracing) {
				RMIConnector::logger->trace("connect"_s, $$str({idstr, " finding stub..."_s}));
			}
			$var($RMIServer, stub, (this->rmiServer != nullptr) ? this->rmiServer : findRMIServer(this->jmxServiceURL, usemap));
			$var($String, stringBoolean, $cast($String, usemap->get("jmx.remote.x.check.stub"_s)));
			bool checkStub = $EnvHelp::computeBooleanFromString(stringBoolean);
			if (checkStub) {
				RMIConnector::checkStub(stub, RMIConnector::rmiServerImplStubClass);
			}
			if (tracing) {
				RMIConnector::logger->trace("connect"_s, $$str({idstr, " connecting stub..."_s}));
			}
			$assign(idstr, tracing ? $str({"["_s, $(this->toString()), "]"_s}) : ($String*)nullptr);
			if (tracing) {
				RMIConnector::logger->trace("connect"_s, $$str({idstr, " getting connection..."_s}));
			}
			$init($JMXConnector);
			$var($Object, credentials, usemap->get($JMXConnector::CREDENTIALS));
			try {
				$set(this, connection, getConnection(stub, credentials, checkStub));
			} catch ($RemoteException& re) {
				$throw(re);
			}
			if (tracing) {
				RMIConnector::logger->trace("connect"_s, $$str({idstr, " getting class loader..."_s}));
			}
			$set(this, defaultClassLoader, $EnvHelp::resolveClientClassLoader(usemap));
			$init($JMXConnectorFactory);
			usemap->put($JMXConnectorFactory::DEFAULT_CLASS_LOADER, this->defaultClassLoader);
			$set(this, rmiNotifClient, $new($RMIConnector$RMINotifClient, this, this->defaultClassLoader, usemap));
			$set(this, env, usemap);
			int64_t checkPeriod = $EnvHelp::getConnectionCheckPeriod(usemap);
			$set(this, communicatorAdmin, $new($RMIConnector$RMIClientCommunicatorAdmin, this, checkPeriod));
			this->connected = true;
			$set(this, connectionId, getConnectionId());
			$init($JMXConnectionNotification);
			$var($Notification, connectedNotif, $new($JMXConnectionNotification, $JMXConnectionNotification::OPENED, this, this->connectionId, this->clientNotifSeqNo++, "Successful connection"_s, nullptr));
			sendNotification(connectedNotif);
			if (tracing) {
				RMIConnector::logger->trace("connect"_s, $$str({idstr, " done..."_s}));
			}
		} catch ($IOException& e) {
			if (tracing) {
				RMIConnector::logger->trace("connect"_s, $$str({idstr, " failed to connect: "_s, e}));
			}
			$throw(e);
		} catch ($RuntimeException& e) {
			if (tracing) {
				RMIConnector::logger->trace("connect"_s, $$str({idstr, " failed to connect: "_s, e}));
			}
			$throw(e);
		} catch ($NamingException& e) {
			$var($String, msg, $str({"Failed to retrieve RMIServer stub: "_s, e}));
			if (tracing) {
				RMIConnector::logger->trace("connect"_s, $$str({idstr, " "_s, msg}));
			}
			$throw($$cast($IOException, $EnvHelp::initCause($$new($IOException, msg), e)));
		}
	}
}

$String* RMIConnector::getConnectionId() {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->terminated || !this->connected) {
			if (RMIConnector::logger->traceOn()) {
				RMIConnector::logger->trace("getConnectionId"_s, $$str({"["_s, $(this->toString()), "] not connected."_s}));
			}
			$throwNew($IOException, "Not connected"_s);
		}
		return $nc(this->connection)->getConnectionId();
	}
}

$MBeanServerConnection* RMIConnector::getMBeanServerConnection() {
	$synchronized(this) {
		return getMBeanServerConnection(nullptr);
	}
}

$MBeanServerConnection* RMIConnector::getMBeanServerConnection($Subject* delegationSubject) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->terminated) {
			if (RMIConnector::logger->traceOn()) {
				RMIConnector::logger->trace("getMBeanServerConnection"_s, $$str({"["_s, $(this->toString()), "] already closed."_s}));
			}
			$throwNew($IOException, "Connection closed"_s);
		} else if (!this->connected) {
			if (RMIConnector::logger->traceOn()) {
				RMIConnector::logger->trace("getMBeanServerConnection"_s, $$str({"["_s, $(this->toString()), "] is not connected."_s}));
			}
			$throwNew($IOException, "Not connected"_s);
		}
		return getConnectionWithSubject(delegationSubject);
	}
}

void RMIConnector::addConnectionNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	if (listener == nullptr) {
		$throwNew($NullPointerException, "listener"_s);
	}
	$nc(this->connectionBroadcaster)->addNotificationListener(listener, filter, handback);
}

void RMIConnector::removeConnectionNotificationListener($NotificationListener* listener) {
	if (listener == nullptr) {
		$throwNew($NullPointerException, "listener"_s);
	}
	$nc(this->connectionBroadcaster)->removeNotificationListener(listener);
}

void RMIConnector::removeConnectionNotificationListener($NotificationListener* listener, $NotificationFilter* filter, Object$* handback) {
	if (listener == nullptr) {
		$throwNew($NullPointerException, "listener"_s);
	}
	$nc(this->connectionBroadcaster)->removeNotificationListener(listener, filter, handback);
}

void RMIConnector::sendNotification($Notification* n) {
	$nc(this->connectionBroadcaster)->sendNotification(n);
}

void RMIConnector::close() {
	$synchronized(this) {
		close(false);
	}
}

void RMIConnector::close(bool intern) {
	$synchronized(this) {
		$useLocalObjectStack();
		bool tracing = RMIConnector::logger->traceOn();
		bool debug = RMIConnector::logger->debugOn();
		$var($String, idstr, tracing ? $str({"["_s, $(this->toString()), "]"_s}) : ($String*)nullptr);
		if (!intern) {
			if (this->terminated) {
				if (this->closeException == nullptr) {
					if (tracing) {
						RMIConnector::logger->trace("close"_s, $$str({idstr, " already closed."_s}));
					}
					return;
				}
			} else {
				this->terminated = true;
			}
		}
		if (this->closeException != nullptr && tracing) {
			if (tracing) {
				RMIConnector::logger->trace("close"_s, $$str({idstr, " had failed: "_s, this->closeException}));
				RMIConnector::logger->trace("close"_s, $$str({idstr, " attempting to close again."_s}));
			}
		}
		$var($String, savedConnectionId, nullptr);
		if (this->connected) {
			$assign(savedConnectionId, this->connectionId);
		}
		$set(this, closeException, nullptr);
		if (tracing) {
			RMIConnector::logger->trace("close"_s, $$str({idstr, " closing."_s}));
		}
		if (this->communicatorAdmin != nullptr) {
			this->communicatorAdmin->terminate();
		}
		if (this->rmiNotifClient != nullptr) {
			try {
				this->rmiNotifClient->terminate();
				if (tracing) {
					RMIConnector::logger->trace("close"_s, $$str({idstr, " RMI Notification client terminated."_s}));
				}
			} catch ($RuntimeException& x) {
				$set(this, closeException, x);
				if (tracing) {
					RMIConnector::logger->trace("close"_s, $$str({idstr, " Failed to terminate RMI Notification client: "_s, x}));
				}
				if (debug) {
					RMIConnector::logger->debug("close"_s, x);
				}
			}
		}
		if (this->connection != nullptr) {
			try {
				this->connection->close();
				if (tracing) {
					RMIConnector::logger->trace("close"_s, $$str({idstr, " closed."_s}));
				}
			} catch ($NoSuchObjectException& nse) {
			} catch ($IOException& e) {
				$set(this, closeException, e);
				if (tracing) {
					RMIConnector::logger->trace("close"_s, $$str({idstr, " Failed to close RMIServer: "_s, e}));
				}
				if (debug) {
					RMIConnector::logger->debug("close"_s, e);
				}
			}
		}
		$nc(this->rmbscMap)->clear();
		if (savedConnectionId != nullptr) {
			$init($JMXConnectionNotification);
			$var($Notification, closedNotif, $new($JMXConnectionNotification, $JMXConnectionNotification::CLOSED, this, savedConnectionId, this->clientNotifSeqNo++, "Client has been closed"_s, nullptr));
			sendNotification(closedNotif);
		}
		if (this->closeException != nullptr) {
			if (tracing) {
				RMIConnector::logger->trace("close"_s, $$str({idstr, " failed to close: "_s, this->closeException}));
			}
			if ($instanceOf($IOException, this->closeException)) {
				$throw($cast($IOException, this->closeException));
			}
			if ($instanceOf($RuntimeException, this->closeException)) {
				$throw($cast($RuntimeException, this->closeException));
			}
			$var($IOException, x, $new($IOException, $$str({"Failed to close: "_s, this->closeException})));
			$throw($$cast($IOException, $EnvHelp::initCause(x, this->closeException)));
		}
	}
}

$Integer* RMIConnector::addListenerWithSubject($ObjectName* name, $MarshalledObject* filter, $Subject* delegationSubject, bool reconnect) {
	$useLocalObjectStack();
	bool debug = RMIConnector::logger->debugOn();
	if (debug) {
		RMIConnector::logger->debug("addListenerWithSubject"_s, "(ObjectName,MarshalledObject,Subject)"_s);
	}
	$var($ObjectNameArray, names, $new($ObjectNameArray, {name}));
	$var($MarshalledObjectArray, filters, $cast($MarshalledObjectArray, $RMIConnector$Util::cast($$new($MarshalledObjectArray, {filter}))));
	$var($SubjectArray, delegationSubjects, $new($SubjectArray, {delegationSubject}));
	$var($IntegerArray, listenerIDs, addListenersWithSubjects(names, filters, delegationSubjects, reconnect));
	if (debug) {
		RMIConnector::logger->debug("addListenerWithSubject"_s, $$str({"listenerID="_s, $nc(listenerIDs)->get(0)}));
	}
	return $nc(listenerIDs)->get(0);
}

$IntegerArray* RMIConnector::addListenersWithSubjects($ObjectNameArray* names, $MarshalledObjectArray* filters, $SubjectArray* delegationSubjects, bool reconnect) {
	$useLocalObjectStack();
	bool debug = RMIConnector::logger->debugOn();
	if (debug) {
		RMIConnector::logger->debug("addListenersWithSubjects"_s, "(ObjectName[],MarshalledObject[],Subject[])"_s);
	}
	$var($ClassLoader, old, pushDefaultClassLoader());
	$var($IntegerArray, listenerIDs, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		try {
			$assign(listenerIDs, $nc(this->connection)->addNotificationListeners(names, filters, delegationSubjects));
		} catch ($NoSuchObjectException& noe) {
			if (reconnect) {
				$nc(this->communicatorAdmin)->gotIOException(noe);
				$assign(listenerIDs, $nc(this->connection)->addNotificationListeners(names, filters, delegationSubjects));
			} else {
				$throw(noe);
			}
		} catch ($IOException& ioe) {
			$nc(this->communicatorAdmin)->gotIOException(ioe);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		popDefaultClassLoader(old);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (debug) {
		RMIConnector::logger->debug("addListenersWithSubjects"_s, $$str({"registered "_s, $$str(((listenerIDs == nullptr) ? 0 : listenerIDs->length)), " listener(s)"_s}));
	}
	return listenerIDs;
}

void RMIConnector::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	if (this->rmiServer == nullptr && this->jmxServiceURL == nullptr) {
		$throwNew($InvalidObjectException, "rmiServer and jmxServiceURL both null"_s);
	}
	initTransients();
}

void RMIConnector::writeObject($ObjectOutputStream* s) {
	if (this->rmiServer == nullptr && this->jmxServiceURL == nullptr) {
		$throwNew($InvalidObjectException, "rmiServer and jmxServiceURL both null."_s);
	}
	$nc(s)->defaultWriteObject();
}

void RMIConnector::initTransients() {
	$set(this, rmbscMap, $new($WeakHashMap));
	this->connected = false;
	this->terminated = false;
	$set(this, connectionBroadcaster, $new($NotificationBroadcasterSupport));
}

void RMIConnector::checkStub($Remote* stub$renamed, $Class* stubClass) {
	$init(RMIConnector);
	$useLocalObjectStack();
	$var($Remote, stub, stub$renamed);
	$beforeCallerSensitive();
	if ($nc($of(stub))->getClass() != stubClass) {
		if (!$Proxy::isProxyClass($of(stub)->getClass())) {
			$throwNew($SecurityException, $$str({"Expecting a "_s, $($nc(stubClass)->getName()), " stub!"_s}));
		} else {
			$var($InvocationHandler, handler, $Proxy::getInvocationHandler(stub));
			$load($RemoteObjectInvocationHandler);
			if ($nc(handler)->getClass() != $RemoteObjectInvocationHandler::class$) {
				$throwNew($SecurityException, $$str({"Expecting a dynamic proxy instance with a "_s, $($RemoteObjectInvocationHandler::class$->getName()), " invocation handler!"_s}));
			} else {
				$assign(stub, $cast($Remote, handler));
			}
		}
	}
	$var($RemoteRef, ref, $cast($RemoteObject, stub)->getRef());
	$load($UnicastRef2);
	if ($nc(ref)->getClass() != $UnicastRef2::class$) {
		$throwNew($SecurityException, $$str({"Expecting a "_s, $($UnicastRef2::class$->getName()), " remote reference in stub!"_s}));
	}
	$var($LiveRef, liveRef, $cast($UnicastRef2, ref)->getLiveRef());
	$var($RMIClientSocketFactory, csf, $nc(liveRef)->getClientSocketFactory());
	$load($SslRMIClientSocketFactory);
	if (csf == nullptr || csf->getClass() != $SslRMIClientSocketFactory::class$) {
		$throwNew($SecurityException, $$str({"Expecting a "_s, $($SslRMIClientSocketFactory::class$->getName()), " RMI client socket factory in stub!"_s}));
	}
}

$RMIServer* RMIConnector::findRMIServer($JMXServiceURL* directoryURL, $Map* environment) {
	$useLocalObjectStack();
	$var($String, path, $nc(directoryURL)->getURLPath());
	int32_t end = $nc(path)->indexOf(u';');
	if (end < 0) {
		end = path->length();
	}
	if (path->startsWith("/jndi/"_s)) {
		return findRMIServerJNDI($(path->substring(6, end)), environment);
	} else if (path->startsWith("/stub/"_s)) {
		return findRMIServerJRMP($(path->substring(6, end)), environment);
	} else {
		$var($String, msg, $str({"URL path must begin with /jndi/ or /stub/ or /ior/: "_s, path}));
		$throwNew($MalformedURLException, msg);
	}
}

$RMIServer* RMIConnector::findRMIServerJNDI($String* jndiURL, $Map* env) {
	$useLocalObjectStack();
	$var($InitialContext, ctx, $new($InitialContext, $($EnvHelp::mapToHashtable(env))));
	$var($Object, objref, ctx->lookup(jndiURL));
	ctx->close();
	return narrowJRMPServer(objref);
}

$RMIServer* RMIConnector::narrowJRMPServer(Object$* objref) {
	$init(RMIConnector);
	return $cast($RMIServer, objref);
}

$RMIServer* RMIConnector::findRMIServerJRMP($String* base64, $Map* env) {
	$useLocalObjectStack();
	$var($bytes, serialized, nullptr);
	try {
		$assign(serialized, base64ToByteArray(base64));
	} catch ($IllegalArgumentException& e) {
		$throwNew($MalformedURLException, $$str({"Bad BASE64 encoding: "_s, $(e->getMessage())}));
	}
	$var($ByteArrayInputStream, bin, $new($ByteArrayInputStream, serialized));
	$var($ClassLoader, loader, $EnvHelp::resolveClientClassLoader(env));
	$var($ObjectInputStream, oin, (loader == nullptr) ? $new($ObjectInputStream, bin) : $cast($ObjectInputStream, $new($RMIConnector$ObjectInputStreamWithLoader, bin, loader)));
	$var($Object, stub, nullptr);
	try {
		$assign(stub, $nc(oin)->readObject());
	} catch ($ClassNotFoundException& e) {
		$throwNew($MalformedURLException, $$str({"Class not found: "_s, e}));
	}
	return $cast($RMIServer, stub);
}

$MBeanServerConnection* RMIConnector::getConnectionWithSubject($Subject* delegationSubject) {
	$useLocalObjectStack();
	$var($MBeanServerConnection, conn, nullptr);
	if (delegationSubject == nullptr) {
		if (this->nullSubjectConnRef == nullptr || ($assign(conn, $cast($MBeanServerConnection, this->nullSubjectConnRef->get()))) == nullptr) {
			$assign(conn, $new($RMIConnector$RemoteMBeanServerConnection, this, nullptr));
			$set(this, nullSubjectConnRef, $new($WeakReference, conn));
		}
	} else {
		$var($WeakReference, wr, $cast($WeakReference, $nc(this->rmbscMap)->get(delegationSubject)));
		if (wr == nullptr || ($assign(conn, $cast($MBeanServerConnection, wr->get()))) == nullptr) {
			$assign(conn, $new($RMIConnector$RemoteMBeanServerConnection, this, delegationSubject));
			$nc(this->rmbscMap)->put(delegationSubject, $$new($WeakReference, conn));
		}
	}
	return conn;
}

$String* RMIConnector::packageOf($String* cn) {
	$init(RMIConnector);
	int32_t i = $nc(cn)->lastIndexOf(u'.');
	return i > 0 ? cn->substring(0, i) : ""_s;
}

$RMIConnection* RMIConnector::shadowJrmpStub($RemoteObject* stub) {
	$init(RMIConnector);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($RemoteRef, ref, $nc(stub)->getRef());
	$var($RemoteRef, proxyRef, $cast($RemoteRef, $nc(RMIConnector::proxyRefConstructor)->newInstance($$new($ObjectArray, {ref}))));
	$load($RemoteRef);
	$var($Constructor, rmiConnectionImplStubConstructor, $nc(RMIConnector::rmiConnectionImplStubClass)->getConstructor($$new($ClassArray, {$RemoteRef::class$})));
	$var($ObjectArray, args, $new($ObjectArray, {proxyRef}));
	$var($RMIConnection, proxyStub, $cast($RMIConnection, $nc(rmiConnectionImplStubConstructor)->newInstance(args)));
	return proxyStub;
}

$RMIConnection* RMIConnector::getConnection($RMIServer* server, Object$* credentials, bool checkStub) {
	$init(RMIConnector);
	$useLocalObjectStack();
	$var($RMIConnection, c, $nc(server)->newClient(credentials));
	if (checkStub) {
		RMIConnector::checkStub(c, RMIConnector::rmiConnectionImplStubClass);
	}
	try {
		if ($nc($of(c))->getClass() == RMIConnector::rmiConnectionImplStubClass) {
			return shadowJrmpStub($cast($RemoteObject, c));
		}
		RMIConnector::logger->trace("getConnection"_s, $$str({"Did not wrap "_s, $of(c)->getClass(), " to foil stack search for classes: class loading semantics may be incorrect"_s}));
	} catch ($Exception& e) {
		RMIConnector::logger->error("getConnection"_s, $$str({"Could not wrap "_s, $nc($of(c))->getClass(), " to foil stack search for classes: class loading semantics may be incorrect: "_s, e}));
		RMIConnector::logger->debug("getConnection"_s, e);
	}
	return c;
}

$bytes* RMIConnector::base64ToByteArray($String* s) {
	$init(RMIConnector);
	int32_t sLen = $nc(s)->length();
	int32_t numGroups = sLen / 4;
	if (4 * numGroups != sLen) {
		$throwNew($IllegalArgumentException, "String length must be a multiple of four."_s);
	}
	int32_t missingBytesInLastGroup = 0;
	int32_t numFullGroups = numGroups;
	if (sLen != 0) {
		if (s->charAt(sLen - 1) == u'=') {
			++missingBytesInLastGroup;
			--numFullGroups;
		}
		if (s->charAt(sLen - 2) == u'=') {
			++missingBytesInLastGroup;
		}
	}
	$var($bytes, result, $new($bytes, 3 * numGroups - missingBytesInLastGroup));
	int32_t inCursor = 0;
	int32_t outCursor = 0;
	for (int32_t i = 0; i < numFullGroups; ++i) {
		int32_t ch0 = base64toInt(s->charAt(inCursor++));
		int32_t ch1 = base64toInt(s->charAt(inCursor++));
		int32_t ch2 = base64toInt(s->charAt(inCursor++));
		int32_t ch3 = base64toInt(s->charAt(inCursor++));
		result->set(outCursor++, (int8_t)((ch0 << 2) | (ch1 >> 4)));
		result->set(outCursor++, (int8_t)((ch1 << 4) | (ch2 >> 2)));
		result->set(outCursor++, (int8_t)((ch2 << 6) | ch3));
	}
	if (missingBytesInLastGroup != 0) {
		int32_t ch0 = base64toInt(s->charAt(inCursor++));
		int32_t ch1 = base64toInt(s->charAt(inCursor++));
		result->set(outCursor++, (int8_t)((ch0 << 2) | (ch1 >> 4)));
		if (missingBytesInLastGroup == 1) {
			int32_t ch2 = base64toInt(s->charAt(inCursor++));
			result->set(outCursor++, (int8_t)((ch1 << 4) | (ch2 >> 2)));
		}
	}
	return result;
}

int32_t RMIConnector::base64toInt(char16_t c) {
	$init(RMIConnector);
	$useLocalObjectStack();
	int32_t result = 0;
	if (c >= RMIConnector::base64ToInt->length) {
		result = -1;
	} else {
		result = RMIConnector::base64ToInt->get(c);
	}
	if (result < 0) {
		$throwNew($IllegalArgumentException, $$str({"Illegal character "_s, $$str(c)}));
	}
	return result;
}

$ClassLoader* RMIConnector::pushDefaultClassLoader() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Thread, t, $Thread::currentThread());
	$var($ClassLoader, old, t->getContextClassLoader());
	if (this->defaultClassLoader != nullptr) {
		$AccessController::doPrivileged($$new($RMIConnector$2, this, t));
	}
	return old;
}

void RMIConnector::popDefaultClassLoader($ClassLoader* old) {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($$new($RMIConnector$3, this, old));
}

$String* RMIConnector::objects($ObjectArray* objs) {
	$init(RMIConnector);
	if (objs == nullptr) {
		return "null"_s;
	} else {
		return $$nc($Arrays::asList(objs))->toString();
	}
}

$String* RMIConnector::strings($StringArray* strs) {
	$init(RMIConnector);
	return objects(strs);
}

$String* RMIConnector::getAttributesNames($AttributeList* attributes) {
	$init(RMIConnector);
	$useLocalObjectStack();
	return attributes != nullptr ? $cast($String, $$nc($$nc($$nc(attributes->asList())->stream())->map($$new(RMIConnector$$Lambda$getName)))->collect($($Collectors::joining(", "_s, "["_s, "]"_s)))) : "[]"_s;
}

void RMIConnector::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(RMIConnector::pRefClassName, "jdk.jmx.remote.internal.rmi.PRef"_s);
	$beforeCallerSensitive();
	$var($String, pRefByteCodeString, $cstr({0xca, 0xfe, 0xba, 0xbe, '\0', '\0', '\0', '5', '\0', 0x17, '\n', '\0', 0x05, '\0', '\r', '\t', '\0', 0x04, '\0', 0x0e, 0x0b, '\0', 0x0f, '\0', 0x10, 0x07, '\0', 0x11, 0x07, '\0', 0x12, 0x01, '\0', 0x06, '<', 'i', 'n', 'i', 't', '>', 0x01, '\0', 0x1e, '(', 'L', 'j', 'a', 'v', 'a', '/', 'r', 'm', 'i', '/', 's', 'e', 'r', 'v', 'e', 'r', '/', 'R', 'e', 'm', 'o', 't', 'e', 'R', 'e', 'f', ';', ')', 'V', 0x01, '\0', 0x04, 'C', 'o', 'd', 'e', 0x01, '\0', 0x06, 'i', 'n', 'v', 'o', 'k', 'e', 0x01, '\0', 'S', '(', 'L', 'j', 'a', 'v', 'a', '/', 'r', 'm', 'i', '/', 'R', 'e', 'm', 'o', 't', 'e', ';', 'L', 'j', 'a', 'v', 'a', '/', 'l', 'a', 'n', 'g', '/', 'r', 'e', 'f', 'l', 'e', 'c', 't', '/', 'M', 'e', 't', 'h', 'o', 'd', ';', '[', 'L', 'j', 'a', 'v', 'a', '/', 'l', 'a', 'n', 'g', '/', 'O', 'b', 'j', 'e', 'c', 't', ';', 'J', ')', 'L', 'j', 'a', 'v', 'a', '/', 'l', 'a', 'n', 'g', '/', 'O', 'b', 'j', 'e', 'c', 't', ';', 0x01, '\0', '\n', 'E', 'x', 'c', 'e', 'p', 't', 'i', 'o', 'n', 's', 0x07, '\0', 0x13, '\f', '\0', 0x06, '\0', 0x07, '\f', '\0', 0x14, '\0', 0x15, 0x07, '\0', 0x16, '\f', '\0', '\t', '\0', '\n', 0x01, '\0', ' ', 'j', 'd', 'k', '/', 'j', 'm', 'x', '/', 'r', 'e', 'm', 'o', 't', 'e', '/', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', '/', 'r', 'm', 'i', '/', 'P', 'R', 'e', 'f', 0x01, '\0', '(', 'c', 'o', 'm', '/', 's', 'u', 'n', '/', 'j', 'm', 'x', '/', 'r', 'e', 'm', 'o', 't', 'e', '/', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', '/', 'r', 'm', 'i', '/', 'P', 'r', 'o', 'x', 'y', 'R', 'e', 'f', 0x01, '\0', 0x13, 'j', 'a', 'v', 'a', '/', 'l', 'a', 'n', 'g', '/', 'E', 'x', 'c', 'e', 'p', 't', 'i', 'o', 'n', 0x01, '\0', 0x03, 'r', 'e', 'f', 0x01, '\0', 0x1b, 'L', 'j', 'a', 'v', 'a', '/', 'r', 'm', 'i', '/', 's', 'e', 'r', 'v', 'e', 'r', '/', 'R', 'e', 'm', 'o', 't', 'e', 'R', 'e', 'f', ';', 0x01, '\0', 0x19, 'j', 'a', 'v', 'a', '/', 'r', 'm', 'i', '/', 's', 'e', 'r', 'v', 'e', 'r', '/', 'R', 'e', 'm', 'o', 't', 'e', 'R', 'e', 'f', '\0', '!', '\0', 0x04, '\0', 0x05, '\0', '\0', '\0', '\0', '\0', 0x02, '\0', 0x01, '\0', 0x06, '\0', 0x07, '\0', 0x01, '\0', '\b', '\0', '\0', '\0', 0x12, '\0', 0x02, '\0', 0x02, '\0', '\0', '\0', 0x06, '*', '+', 0xb7, '\0', 0x01, 0xb1, '\0', '\0', '\0', '\0', '\0', 0x01, '\0', '\t', '\0', '\n', '\0', 0x02, '\0', '\b', '\0', '\0', '\0', 0x1b, '\0', 0x06, '\0', 0x06, '\0', '\0', '\0', 0x0f, '*', 0xb4, '\0', 0x02, '+', ',', '-', 0x16, 0x04, 0xb9, '\0', 0x03, 0x06, '\0', 0xb0, '\0', '\0', '\0', '\0', '\0', 0x0b, '\0', '\0', '\0', 0x04, '\0', 0x01, '\0', '\f', '\0', '\0'}));
	$assignStatic(RMIConnector::logger, $new($ClassLogger, "javax.management.remote.rmi"_s, "RMIConnector"_s));
	$load($RMIServer);
	$assignStatic(RMIConnector::rmiServerImplStubClassName, $str({$($RMIServer::class$->getName()), "Impl_Stub"_s}));
	$load($RMIConnection);
	$assignStatic(RMIConnector::rmiConnectionImplStubClassName, $str({$($RMIConnection::class$->getName()), "Impl_Stub"_s}));
	{
		$var($String, pRefByteCodeString, $cstr({0xca, 0xfe, 0xba, 0xbe, '\0', '\0', '\0', '5', '\0', 0x17, '\n', '\0', 0x05, '\0', '\r', '\t', '\0', 0x04, '\0', 0x0e, 0x0b, '\0', 0x0f, '\0', 0x10, 0x07, '\0', 0x11, 0x07, '\0', 0x12, 0x01, '\0', 0x06, '<', 'i', 'n', 'i', 't', '>', 0x01, '\0', 0x1e, '(', 'L', 'j', 'a', 'v', 'a', '/', 'r', 'm', 'i', '/', 's', 'e', 'r', 'v', 'e', 'r', '/', 'R', 'e', 'm', 'o', 't', 'e', 'R', 'e', 'f', ';', ')', 'V', 0x01, '\0', 0x04, 'C', 'o', 'd', 'e', 0x01, '\0', 0x06, 'i', 'n', 'v', 'o', 'k', 'e', 0x01, '\0', 'S', '(', 'L', 'j', 'a', 'v', 'a', '/', 'r', 'm', 'i', '/', 'R', 'e', 'm', 'o', 't', 'e', ';', 'L', 'j', 'a', 'v', 'a', '/', 'l', 'a', 'n', 'g', '/', 'r', 'e', 'f', 'l', 'e', 'c', 't', '/', 'M', 'e', 't', 'h', 'o', 'd', ';', '[', 'L', 'j', 'a', 'v', 'a', '/', 'l', 'a', 'n', 'g', '/', 'O', 'b', 'j', 'e', 'c', 't', ';', 'J', ')', 'L', 'j', 'a', 'v', 'a', '/', 'l', 'a', 'n', 'g', '/', 'O', 'b', 'j', 'e', 'c', 't', ';', 0x01, '\0', '\n', 'E', 'x', 'c', 'e', 'p', 't', 'i', 'o', 'n', 's', 0x07, '\0', 0x13, '\f', '\0', 0x06, '\0', 0x07, '\f', '\0', 0x14, '\0', 0x15, 0x07, '\0', 0x16, '\f', '\0', '\t', '\0', '\n', 0x01, '\0', ' ', 'j', 'd', 'k', '/', 'j', 'm', 'x', '/', 'r', 'e', 'm', 'o', 't', 'e', '/', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', '/', 'r', 'm', 'i', '/', 'P', 'R', 'e', 'f', 0x01, '\0', '(', 'c', 'o', 'm', '/', 's', 'u', 'n', '/', 'j', 'm', 'x', '/', 'r', 'e', 'm', 'o', 't', 'e', '/', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', '/', 'r', 'm', 'i', '/', 'P', 'r', 'o', 'x', 'y', 'R', 'e', 'f', 0x01, '\0', 0x13, 'j', 'a', 'v', 'a', '/', 'l', 'a', 'n', 'g', '/', 'E', 'x', 'c', 'e', 'p', 't', 'i', 'o', 'n', 0x01, '\0', 0x03, 'r', 'e', 'f', 0x01, '\0', 0x1b, 'L', 'j', 'a', 'v', 'a', '/', 'r', 'm', 'i', '/', 's', 'e', 'r', 'v', 'e', 'r', '/', 'R', 'e', 'm', 'o', 't', 'e', 'R', 'e', 'f', ';', 0x01, '\0', 0x19, 'j', 'a', 'v', 'a', '/', 'r', 'm', 'i', '/', 's', 'e', 'r', 'v', 'e', 'r', '/', 'R', 'e', 'm', 'o', 't', 'e', 'R', 'e', 'f', '\0', '!', '\0', 0x04, '\0', 0x05, '\0', '\0', '\0', '\0', '\0', 0x02, '\0', 0x01, '\0', 0x06, '\0', 0x07, '\0', 0x01, '\0', '\b', '\0', '\0', '\0', 0x12, '\0', 0x02, '\0', 0x02, '\0', '\0', '\0', 0x06, '*', '+', 0xb7, '\0', 0x01, 0xb1, '\0', '\0', '\0', '\0', '\0', 0x01, '\0', '\t', '\0', '\n', '\0', 0x02, '\0', '\b', '\0', '\0', '\0', 0x1b, '\0', 0x06, '\0', 0x06, '\0', '\0', '\0', 0x0f, '*', 0xb4, '\0', 0x02, '+', ',', '-', 0x16, 0x04, 0xb9, '\0', 0x03, 0x06, '\0', 0xb0, '\0', '\0', '\0', '\0', '\0', 0x0b, '\0', '\0', '\0', 0x04, '\0', 0x01, '\0', '\f', '\0', '\0'}));
		$var($bytes, pRefByteCode, $NoCallStackClassLoader::stringToBytes(pRefByteCodeString));
		$var($PrivilegedExceptionAction, action, $new($RMIConnector$1, pRefByteCode));
		$Class* serverStubClass = nullptr;
		try {
			serverStubClass = $Class::forName(RMIConnector::rmiServerImplStubClassName);
		} catch ($Exception& e) {
			RMIConnector::logger->error("<clinit>"_s, $$str({"Failed to instantiate "_s, RMIConnector::rmiServerImplStubClassName, ": "_s, e}));
			RMIConnector::logger->debug("<clinit>"_s, e);
			serverStubClass = nullptr;
		}
		$assignStatic(RMIConnector::rmiServerImplStubClass, serverStubClass);
		$Class* stubClass = nullptr;
		$var($Constructor, constr, nullptr);
		try {
			stubClass = $Class::forName(RMIConnector::rmiConnectionImplStubClassName);
			$var($Constructor, tmp, $cast($Constructor, $AccessController::doPrivileged(action)));
			$assign(constr, tmp);
		} catch ($Exception& e) {
			RMIConnector::logger->error("<clinit>"_s, $$str({"Failed to initialize proxy reference constructor for "_s, RMIConnector::rmiConnectionImplStubClassName, ": "_s, e}));
			RMIConnector::logger->debug("<clinit>"_s, e);
			stubClass = nullptr;
			$assign(constr, nullptr);
		}
		$assignStatic(RMIConnector::rmiConnectionImplStubClass, stubClass);
		$assignStatic(RMIConnector::proxyRefConstructor, constr);
	}
	$assignStatic(RMIConnector::base64ToInt, $new($bytes, {
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		62,
		-1,
		-1,
		-1,
		63,
		52,
		53,
		54,
		55,
		56,
		57,
		58,
		59,
		60,
		61,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		10,
		11,
		12,
		13,
		14,
		15,
		16,
		17,
		18,
		19,
		20,
		21,
		22,
		23,
		24,
		25,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		26,
		27,
		28,
		29,
		30,
		31,
		32,
		33,
		34,
		35,
		36,
		37,
		38,
		39,
		40,
		41,
		42,
		43,
		44,
		45,
		46,
		47,
		48,
		49,
		50,
		51
	}));
	$assignStatic(RMIConnector::orb, nullptr);
}

RMIConnector::RMIConnector() {
}

$Class* RMIConnector::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.management.remote.rmi.RMIConnector$$Lambda$getName")) {
			return RMIConnector$$Lambda$getName::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"logger", "Lcom/sun/jmx/remote/util/ClassLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RMIConnector, logger)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RMIConnector, serialVersionUID)},
		{"rmiServerImplStubClassName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RMIConnector, rmiServerImplStubClassName)},
		{"rmiServerImplStubClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(RMIConnector, rmiServerImplStubClass)},
		{"rmiConnectionImplStubClassName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RMIConnector, rmiConnectionImplStubClassName)},
		{"rmiConnectionImplStubClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(RMIConnector, rmiConnectionImplStubClass)},
		{"pRefClassName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RMIConnector, pRefClassName)},
		{"proxyRefConstructor", "Ljava/lang/reflect/Constructor;", "Ljava/lang/reflect/Constructor<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(RMIConnector, proxyRefConstructor)},
		{"base64ToInt", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RMIConnector, base64ToInt)},
		{"rmiServer", "Ljavax/management/remote/rmi/RMIServer;", nullptr, $PRIVATE | $FINAL, $field(RMIConnector, rmiServer)},
		{"jmxServiceURL", "Ljavax/management/remote/JMXServiceURL;", nullptr, $PRIVATE | $FINAL, $field(RMIConnector, jmxServiceURL)},
		{"env", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE | $TRANSIENT, $field(RMIConnector, env)},
		{"defaultClassLoader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, defaultClassLoader)},
		{"connection", "Ljavax/management/remote/rmi/RMIConnection;", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, connection)},
		{"connectionId", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, connectionId)},
		{"clientNotifSeqNo", "J", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, clientNotifSeqNo)},
		{"rmbscMap", "Ljava/util/WeakHashMap;", "Ljava/util/WeakHashMap<Ljavax/security/auth/Subject;Ljava/lang/ref/WeakReference<Ljavax/management/MBeanServerConnection;>;>;", $PRIVATE | $TRANSIENT, $field(RMIConnector, rmbscMap)},
		{"nullSubjectConnRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljavax/management/MBeanServerConnection;>;", $PRIVATE | $TRANSIENT, $field(RMIConnector, nullSubjectConnRef)},
		{"rmiNotifClient", "Ljavax/management/remote/rmi/RMIConnector$RMINotifClient;", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, rmiNotifClient)},
		{"clientNotifCounter", "J", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, clientNotifCounter)},
		{"connected", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, connected)},
		{"terminated", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, terminated)},
		{"closeException", "Ljava/lang/Exception;", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, closeException)},
		{"connectionBroadcaster", "Ljavax/management/NotificationBroadcasterSupport;", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, connectionBroadcaster)},
		{"communicatorAdmin", "Lcom/sun/jmx/remote/internal/ClientCommunicatorAdmin;", nullptr, $PRIVATE | $TRANSIENT, $field(RMIConnector, communicatorAdmin)},
		{"orb", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(RMIConnector, orb)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/management/remote/rmi/RMIServer;Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;)V", "(Ljavax/management/remote/rmi/RMIServer;Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;)V", $PRIVATE, $method(RMIConnector, init$, void, $RMIServer*, $JMXServiceURL*, $Map*)},
		{"<init>", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;)V", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC, $method(RMIConnector, init$, void, $JMXServiceURL*, $Map*)},
		{"<init>", "(Ljavax/management/remote/rmi/RMIServer;Ljava/util/Map;)V", "(Ljavax/management/remote/rmi/RMIServer;Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC, $method(RMIConnector, init$, void, $RMIServer*, $Map*)},
		{"addConnectionNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(RMIConnector, addConnectionNotificationListener, void, $NotificationListener*, $NotificationFilter*, Object$*)},
		{"addListenerWithSubject", "(Ljavax/management/ObjectName;Ljava/rmi/MarshalledObject;Ljavax/security/auth/Subject;Z)Ljava/lang/Integer;", "(Ljavax/management/ObjectName;Ljava/rmi/MarshalledObject<Ljavax/management/NotificationFilter;>;Ljavax/security/auth/Subject;Z)Ljava/lang/Integer;", $PRIVATE, $method(RMIConnector, addListenerWithSubject, $Integer*, $ObjectName*, $MarshalledObject*, $Subject*, bool), "javax.management.InstanceNotFoundException,java.io.IOException"},
		{"addListenersWithSubjects", "([Ljavax/management/ObjectName;[Ljava/rmi/MarshalledObject;[Ljavax/security/auth/Subject;Z)[Ljava/lang/Integer;", "([Ljavax/management/ObjectName;[Ljava/rmi/MarshalledObject<Ljavax/management/NotificationFilter;>;[Ljavax/security/auth/Subject;Z)[Ljava/lang/Integer;", $PRIVATE, $method(RMIConnector, addListenersWithSubjects, $IntegerArray*, $ObjectNameArray*, $MarshalledObjectArray*, $SubjectArray*, bool), "javax.management.InstanceNotFoundException,java.io.IOException"},
		{"base64ToByteArray", "(Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC, $staticMethod(RMIConnector, base64ToByteArray, $bytes*, $String*)},
		{"base64toInt", "(C)I", nullptr, $PRIVATE | $STATIC, $staticMethod(RMIConnector, base64toInt, int32_t, char16_t)},
		{"checkStub", "(Ljava/rmi/Remote;Ljava/lang/Class;)V", "(Ljava/rmi/Remote;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(RMIConnector, checkStub, void, $Remote*, $Class*)},
		{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(RMIConnector, close, void), "java.io.IOException"},
		{"close", "(Z)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(RMIConnector, close, void, bool), "java.io.IOException"},
		{"connect", "()V", nullptr, $PUBLIC, $virtualMethod(RMIConnector, connect, void), "java.io.IOException"},
		{"connect", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC | $SYNCHRONIZED, $virtualMethod(RMIConnector, connect, void, $Map*), "java.io.IOException"},
		{"findRMIServer", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map;)Ljavax/management/remote/rmi/RMIServer;", "(Ljavax/management/remote/JMXServiceURL;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;)Ljavax/management/remote/rmi/RMIServer;", $PRIVATE, $method(RMIConnector, findRMIServer, $RMIServer*, $JMXServiceURL*, $Map*), "javax.naming.NamingException,java.io.IOException"},
		{"findRMIServerJNDI", "(Ljava/lang/String;Ljava/util/Map;)Ljavax/management/remote/rmi/RMIServer;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;)Ljavax/management/remote/rmi/RMIServer;", $PRIVATE, $method(RMIConnector, findRMIServerJNDI, $RMIServer*, $String*, $Map*), "javax.naming.NamingException"},
		{"findRMIServerJRMP", "(Ljava/lang/String;Ljava/util/Map;)Ljavax/management/remote/rmi/RMIServer;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;)Ljavax/management/remote/rmi/RMIServer;", $PRIVATE, $method(RMIConnector, findRMIServerJRMP, $RMIServer*, $String*, $Map*), "java.io.IOException"},
		{"getAddress", "()Ljavax/management/remote/JMXServiceURL;", nullptr, $PUBLIC, $virtualMethod(RMIConnector, getAddress, $JMXServiceURL*)},
		{"getAttributesNames", "(Ljavax/management/AttributeList;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(RMIConnector, getAttributesNames, $String*, $AttributeList*)},
		{"getConnection", "(Ljavax/management/remote/rmi/RMIServer;Ljava/lang/Object;Z)Ljavax/management/remote/rmi/RMIConnection;", nullptr, $PRIVATE | $STATIC, $staticMethod(RMIConnector, getConnection, $RMIConnection*, $RMIServer*, Object$*, bool), "java.io.IOException"},
		{"getConnectionId", "()Ljava/lang/String;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(RMIConnector, getConnectionId, $String*), "java.io.IOException"},
		{"getConnectionWithSubject", "(Ljavax/security/auth/Subject;)Ljavax/management/MBeanServerConnection;", nullptr, $PRIVATE, $method(RMIConnector, getConnectionWithSubject, $MBeanServerConnection*, $Subject*)},
		{"getMBeanServerConnection", "()Ljavax/management/MBeanServerConnection;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(RMIConnector, getMBeanServerConnection, $MBeanServerConnection*), "java.io.IOException"},
		{"getMBeanServerConnection", "(Ljavax/security/auth/Subject;)Ljavax/management/MBeanServerConnection;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(RMIConnector, getMBeanServerConnection, $MBeanServerConnection*, $Subject*), "java.io.IOException"},
		{"initTransients", "()V", nullptr, $PRIVATE, $method(RMIConnector, initTransients, void)},
		{"narrowJRMPServer", "(Ljava/lang/Object;)Ljavax/management/remote/rmi/RMIServer;", nullptr, $PRIVATE | $STATIC, $staticMethod(RMIConnector, narrowJRMPServer, $RMIServer*, Object$*)},
		{"objects", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(RMIConnector, objects, $String*, $ObjectArray*)},
		{"packageOf", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(RMIConnector, packageOf, $String*, $String*)},
		{"popDefaultClassLoader", "(Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE, $method(RMIConnector, popDefaultClassLoader, void, $ClassLoader*)},
		{"pushDefaultClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE, $method(RMIConnector, pushDefaultClassLoader, $ClassLoader*)},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(RMIConnector, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
		{"removeConnectionNotificationListener", "(Ljavax/management/NotificationListener;)V", nullptr, $PUBLIC, $virtualMethod(RMIConnector, removeConnectionNotificationListener, void, $NotificationListener*), "javax.management.ListenerNotFoundException"},
		{"removeConnectionNotificationListener", "(Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(RMIConnector, removeConnectionNotificationListener, void, $NotificationListener*, $NotificationFilter*, Object$*), "javax.management.ListenerNotFoundException"},
		{"sendNotification", "(Ljavax/management/Notification;)V", nullptr, $PRIVATE, $method(RMIConnector, sendNotification, void, $Notification*)},
		{"shadowJrmpStub", "(Ljava/rmi/server/RemoteObject;)Ljavax/management/remote/rmi/RMIConnection;", nullptr, $PRIVATE | $STATIC, $staticMethod(RMIConnector, shadowJrmpStub, $RMIConnection*, $RemoteObject*), "java.lang.InstantiationException,java.lang.IllegalAccessException,java.lang.reflect.InvocationTargetException,java.lang.ClassNotFoundException,java.lang.NoSuchMethodException"},
		{"strings", "([Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(RMIConnector, strings, $String*, $StringArray*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(RMIConnector, toString, $String*)},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(RMIConnector, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.remote.rmi.RMIConnector$ObjectInputStreamWithLoader", "javax.management.remote.rmi.RMIConnector", "ObjectInputStreamWithLoader", $PRIVATE | $STATIC | $FINAL},
		{"javax.management.remote.rmi.RMIConnector$RMIClientCommunicatorAdmin", "javax.management.remote.rmi.RMIConnector", "RMIClientCommunicatorAdmin", $PRIVATE},
		{"javax.management.remote.rmi.RMIConnector$RMINotifClient", "javax.management.remote.rmi.RMIConnector", "RMINotifClient", $PRIVATE},
		{"javax.management.remote.rmi.RMIConnector$RemoteMBeanServerConnection", "javax.management.remote.rmi.RMIConnector", "RemoteMBeanServerConnection", $PRIVATE},
		{"javax.management.remote.rmi.RMIConnector$Util", "javax.management.remote.rmi.RMIConnector", "Util", $STATIC | $FINAL},
		{"javax.management.remote.rmi.RMIConnector$3", nullptr, nullptr, 0},
		{"javax.management.remote.rmi.RMIConnector$2", nullptr, nullptr, 0},
		{"javax.management.remote.rmi.RMIConnector$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.remote.rmi.RMIConnector",
		"java.lang.Object",
		"javax.management.remote.JMXConnector,java.io.Serializable,javax.management.remote.JMXAddressable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.management.remote.rmi.RMIConnector$ObjectInputStreamWithLoader,javax.management.remote.rmi.RMIConnector$RMIClientCommunicatorAdmin,javax.management.remote.rmi.RMIConnector$RMINotifClient,javax.management.remote.rmi.RMIConnector$RemoteMBeanServerConnection,javax.management.remote.rmi.RMIConnector$Util,javax.management.remote.rmi.RMIConnector$3,javax.management.remote.rmi.RMIConnector$2,javax.management.remote.rmi.RMIConnector$1"
	};
	$loadClass(RMIConnector, name, initialize, &classInfo$$, RMIConnector::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(RMIConnector));
	});
	return class$;
}

$Class* RMIConnector::class$ = nullptr;

			} // rmi
		} // remote
	} // management
} // javax