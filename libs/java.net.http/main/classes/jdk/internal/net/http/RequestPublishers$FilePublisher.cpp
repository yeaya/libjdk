#include <jdk/internal/net/http/RequestPublishers$FilePublisher.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileNotFoundException.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/Iterable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/UndeclaredThrowableException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/LinkOption.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/Flow$Subscriber.h>
#include <java/util/function/Function.h>
#include <jdk/internal/net/http/PullPublisher.h>
#include <jdk/internal/net/http/RequestPublishers$StreamIterator.h>
#include <jdk/internal/net/http/RequestPublishers.h>
#include <jcpp.h>

using $LinkOptionArray = $Array<::java::nio::file::LinkOption>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $PermissionArray = $Array<::java::security::Permission>;
using $FileInputStream = ::java::io::FileInputStream;
using $FileNotFoundException = ::java::io::FileNotFoundException;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $UndeclaredThrowableException = ::java::lang::reflect::UndeclaredThrowableException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Iterator = ::java::util::Iterator;
using $Flow$Subscriber = ::java::util::concurrent::Flow$Subscriber;
using $Function = ::java::util::function::Function;
using $PullPublisher = ::jdk::internal::net::http::PullPublisher;
using $RequestPublishers = ::jdk::internal::net::http::RequestPublishers;
using $RequestPublishers$StreamIterator = ::jdk::internal::net::http::RequestPublishers$StreamIterator;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class RequestPublishers$FilePublisher$$Lambda$lambda$create$0 : public $Function {
	$class(RequestPublishers$FilePublisher$$Lambda$lambda$create$0, $NO_CLASS_INIT, $Function)
public:
	void init$($AccessControlContext* acc, $Permission* perm, bool finalDefaultFS) {
		$set(this, acc, acc);
		$set(this, perm, perm);
		this->finalDefaultFS = finalDefaultFS;
	}
	virtual $Object* apply(Object$* p) override {
		 return RequestPublishers$FilePublisher::lambda$create$0(acc, perm, finalDefaultFS, $cast($Path, p));
	}
	$AccessControlContext* acc = nullptr;
	$Permission* perm = nullptr;
	bool finalDefaultFS = false;
};
$Class* RequestPublishers$FilePublisher$$Lambda$lambda$create$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"acc", "Ljava/security/AccessControlContext;", nullptr, $PUBLIC, $field(RequestPublishers$FilePublisher$$Lambda$lambda$create$0, acc)},
		{"perm", "Ljava/security/Permission;", nullptr, $PUBLIC, $field(RequestPublishers$FilePublisher$$Lambda$lambda$create$0, perm)},
		{"finalDefaultFS", "Z", nullptr, $PUBLIC, $field(RequestPublishers$FilePublisher$$Lambda$lambda$create$0, finalDefaultFS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/AccessControlContext;Ljava/security/Permission;Z)V", nullptr, $PUBLIC, $method(RequestPublishers$FilePublisher$$Lambda$lambda$create$0, init$, void, $AccessControlContext*, $Permission*, bool)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$FilePublisher$$Lambda$lambda$create$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.RequestPublishers$FilePublisher$$Lambda$lambda$create$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RequestPublishers$FilePublisher$$Lambda$lambda$create$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$FilePublisher$$Lambda$lambda$create$0);
	});
	return class$;
}
$Class* RequestPublishers$FilePublisher$$Lambda$lambda$create$0::class$ = nullptr;

class RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1 : public $PrivilegedExceptionAction {
	$class(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Path* path) {
		$set(this, path, path);
	}
	virtual $Object* run() override {
		 return RequestPublishers$FilePublisher::lambda$createInputStream$1(path);
	}
	$Path* path = nullptr;
};
$Class* RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"path", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1, init$, void, $Path*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1);
	});
	return class$;
}
$Class* RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1::class$ = nullptr;

class RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2 : public $PrivilegedExceptionAction {
	$class(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$($Path* path) {
		$set(this, path, path);
	}
	virtual $Object* run() override {
		 return RequestPublishers$FilePublisher::lambda$createInputStream$2(path);
	}
	$Path* path = nullptr;
};
$Class* RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"path", "Ljava/nio/file/Path;", nullptr, $PUBLIC, $field(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2, init$, void, $Path*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2);
	});
	return class$;
}
$Class* RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2::class$ = nullptr;

class RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3 : public $Iterable {
	$class(RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3, $NO_CLASS_INIT, $Iterable)
public:
	void init$($InputStream* fis) {
		$set(this, fis, fis);
	}
	virtual $Iterator* iterator() override {
		 return RequestPublishers$FilePublisher::lambda$subscribe$3(fis);
	}
	$InputStream* fis = nullptr;
};
$Class* RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fis", "Ljava/io/InputStream;", nullptr, $PUBLIC, $field(RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3, fis)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3, init$, void, $InputStream*)},
		{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3, iterator, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3",
		"java.lang.Object",
		"java.lang.Iterable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3);
	});
	return class$;
}
$Class* RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3::class$ = nullptr;

bool RequestPublishers$FilePublisher::$assertionsDisabled = false;

$String* RequestPublishers$FilePublisher::pathForSecurityCheck($Path* path) {
	$init(RequestPublishers$FilePublisher);
	return $$nc($nc(path)->toFile())->getPath();
}

RequestPublishers$FilePublisher* RequestPublishers$FilePublisher::create($Path* path) {
	$init(RequestPublishers$FilePublisher);
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	$var($FilePermission, filePermission, nullptr);
	bool defaultFS = true;
	try {
		$var($String, fn, pathForSecurityCheck(path));
		if (sm != nullptr) {
			$var($FilePermission, readPermission, $new($FilePermission, fn, "read"_s));
			sm->checkPermission(readPermission);
			$assign(filePermission, readPermission);
		}
	} catch ($UnsupportedOperationException& uoe) {
		defaultFS = false;
		try {
			if (sm != nullptr) {
				$$nc($Files::newInputStream(path, $$new($OpenOptionArray, 0)))->close();
			}
		} catch ($IOException& ioe) {
			if ($instanceOf($FileNotFoundException, ioe)) {
				$throw($cast($FileNotFoundException, ioe));
			} else {
				$var($FileNotFoundException, ex, $new($FileNotFoundException, $(ioe->getMessage())));
				ex->initCause(ioe);
				$throw(ex);
			}
		}
	}
	if ($Files::notExists(path, $$new($LinkOptionArray, 0))) {
		$throwNew($FileNotFoundException, $$str({path, " not found"_s}));
	}
	$var($Permission, perm, filePermission);
	if (!RequestPublishers$FilePublisher::$assertionsDisabled && !(perm == nullptr || $$nc(perm->getActions())->equals("read"_s))) {
		$throwNew($AssertionError);
	}
	$var($AccessControlContext, acc, sm != nullptr ? $AccessController::getContext() : ($AccessControlContext*)nullptr);
	bool finalDefaultFS = defaultFS;
	$var($Function, inputStreamSupplier, $new(RequestPublishers$FilePublisher$$Lambda$lambda$create$0, acc, perm, finalDefaultFS));
	int64_t length = 0;
	try {
		length = $Files::size(path);
	} catch ($IOException& ioe) {
		length = -1;
	}
	return $new(RequestPublishers$FilePublisher, path, length, inputStreamSupplier);
}

$InputStream* RequestPublishers$FilePublisher::createInputStream($Path* path, $AccessControlContext* acc, $Permission* perm, bool defaultFS) {
	$init(RequestPublishers$FilePublisher);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		if (acc != nullptr) {
			$var($PrivilegedExceptionAction, pa, defaultFS ? $cast($PrivilegedExceptionAction, $new(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1, path)) : $cast($PrivilegedExceptionAction, $new(RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2, path)));
			return perm != nullptr ? $cast($InputStream, $AccessController::doPrivileged(pa, acc, $$new($PermissionArray, {perm}))) : $cast($InputStream, $AccessController::doPrivileged(pa, acc));
		} else {
			return defaultFS ? $cast($InputStream, $new($FileInputStream, $($nc(path)->toFile()))) : $Files::newInputStream(path, $$new($OpenOptionArray, 0));
		}
	} catch ($PrivilegedActionException& pae) {
		$throw($(toUncheckedException($(pae->getCause()))));
	} catch ($IOException& io) {
		$throwNew($UncheckedIOException, io);
	}
	$shouldNotReachHere();
}

$RuntimeException* RequestPublishers$FilePublisher::toUncheckedException($Throwable* t) {
	$init(RequestPublishers$FilePublisher);
	if ($instanceOf($RuntimeException, t)) {
		$throw($cast($RuntimeException, t));
	}
	if ($instanceOf($Error, t)) {
		$throw($cast($Error, t));
	}
	if ($instanceOf($IOException, t)) {
		$throwNew($UncheckedIOException, $cast($IOException, t));
	}
	$throwNew($UndeclaredThrowableException, t);
	$shouldNotReachHere();
}

void RequestPublishers$FilePublisher::init$($Path* name, int64_t length, $Function* inputStreamSupplier) {
	$set(this, path, name);
	this->length = length;
	$set(this, inputStreamSupplier, inputStreamSupplier);
}

void RequestPublishers$FilePublisher::subscribe($Flow$Subscriber* subscriber) {
	$useLocalObjectStack();
	$var($InputStream, is, nullptr);
	$var($Throwable, t, nullptr);
	try {
		$assign(is, $cast($InputStream, $nc(this->inputStreamSupplier)->apply(this->path)));
	} catch ($UncheckedIOException& ue) {
		$assign(t, ue->getCause());
	} catch ($UndeclaredThrowableException& ue) {
		$assign(t, ue->getCause());
	} catch ($Throwable& th) {
		$assign(t, th);
	}
	$var($InputStream, fis, is);
	$var($PullPublisher, publisher, nullptr);
	if (t == nullptr) {
		$assign(publisher, $new($PullPublisher, $$new(RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3, fis)));
	} else {
		$assign(publisher, $new($PullPublisher, nullptr, t));
	}
	$nc(publisher)->subscribe(subscriber);
}

int64_t RequestPublishers$FilePublisher::contentLength() {
	return this->length;
}

$Iterator* RequestPublishers$FilePublisher::lambda$subscribe$3($InputStream* fis) {
	$init(RequestPublishers$FilePublisher);
	return $new($RequestPublishers$StreamIterator, fis);
}

$InputStream* RequestPublishers$FilePublisher::lambda$createInputStream$2($Path* path) {
	$init(RequestPublishers$FilePublisher);
	return $Files::newInputStream(path, $$new($OpenOptionArray, 0));
}

$InputStream* RequestPublishers$FilePublisher::lambda$createInputStream$1($Path* path) {
	$init(RequestPublishers$FilePublisher);
	return $new($FileInputStream, $($nc(path)->toFile()));
}

$InputStream* RequestPublishers$FilePublisher::lambda$create$0($AccessControlContext* acc, $Permission* perm, bool finalDefaultFS, $Path* p) {
	$init(RequestPublishers$FilePublisher);
	return createInputStream(p, acc, perm, finalDefaultFS);
}

void RequestPublishers$FilePublisher::clinit$($Class* clazz) {
	$load($RequestPublishers);
	RequestPublishers$FilePublisher::$assertionsDisabled = !$RequestPublishers::class$->desiredAssertionStatus();
}

RequestPublishers$FilePublisher::RequestPublishers$FilePublisher() {
}

$Class* RequestPublishers$FilePublisher::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.RequestPublishers$FilePublisher$$Lambda$lambda$create$0")) {
			return RequestPublishers$FilePublisher$$Lambda$lambda$create$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1")) {
			return RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2")) {
			return RequestPublishers$FilePublisher$$Lambda$lambda$createInputStream$2$2::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3")) {
			return RequestPublishers$FilePublisher$$Lambda$lambda$subscribe$3$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(RequestPublishers$FilePublisher, $assertionsDisabled)},
		{"path", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(RequestPublishers$FilePublisher, path)},
		{"length", "J", nullptr, $PRIVATE | $FINAL, $field(RequestPublishers$FilePublisher, length)},
		{"inputStreamSupplier", "Ljava/util/function/Function;", "Ljava/util/function/Function<Ljava/nio/file/Path;Ljava/io/InputStream;>;", $PRIVATE | $FINAL, $field(RequestPublishers$FilePublisher, inputStreamSupplier)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;JLjava/util/function/Function;)V", "(Ljava/nio/file/Path;JLjava/util/function/Function<Ljava/nio/file/Path;Ljava/io/InputStream;>;)V", $PRIVATE, $method(RequestPublishers$FilePublisher, init$, void, $Path*, int64_t, $Function*)},
		{"contentLength", "()J", nullptr, $PUBLIC, $virtualMethod(RequestPublishers$FilePublisher, contentLength, int64_t)},
		{"create", "(Ljava/nio/file/Path;)Ljdk/internal/net/http/RequestPublishers$FilePublisher;", nullptr, $PUBLIC | $STATIC, $staticMethod(RequestPublishers$FilePublisher, create, RequestPublishers$FilePublisher*, $Path*), "java.io.FileNotFoundException"},
		{"createInputStream", "(Ljava/nio/file/Path;Ljava/security/AccessControlContext;Ljava/security/Permission;Z)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC, $staticMethod(RequestPublishers$FilePublisher, createInputStream, $InputStream*, $Path*, $AccessControlContext*, $Permission*, bool)},
		{"lambda$create$0", "(Ljava/security/AccessControlContext;Ljava/security/Permission;ZLjava/nio/file/Path;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RequestPublishers$FilePublisher, lambda$create$0, $InputStream*, $AccessControlContext*, $Permission*, bool, $Path*)},
		{"lambda$createInputStream$1", "(Ljava/nio/file/Path;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RequestPublishers$FilePublisher, lambda$createInputStream$1, $InputStream*, $Path*), "java.lang.Exception"},
		{"lambda$createInputStream$2", "(Ljava/nio/file/Path;)Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RequestPublishers$FilePublisher, lambda$createInputStream$2, $InputStream*, $Path*), "java.lang.Exception"},
		{"lambda$subscribe$3", "(Ljava/io/InputStream;)Ljava/util/Iterator;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RequestPublishers$FilePublisher, lambda$subscribe$3, $Iterator*, $InputStream*)},
		{"pathForSecurityCheck", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(RequestPublishers$FilePublisher, pathForSecurityCheck, $String*, $Path*)},
		{"subscribe", "(Ljava/util/concurrent/Flow$Subscriber;)V", "(Ljava/util/concurrent/Flow$Subscriber<-Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(RequestPublishers$FilePublisher, subscribe, void, $Flow$Subscriber*)},
		{"toUncheckedException", "(Ljava/lang/Throwable;)Ljava/lang/RuntimeException;", nullptr, $PRIVATE | $STATIC, $staticMethod(RequestPublishers$FilePublisher, toUncheckedException, $RuntimeException*, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.RequestPublishers$FilePublisher", "jdk.internal.net.http.RequestPublishers", "FilePublisher", $PUBLIC | $STATIC},
		{"java.net.http.HttpRequest$BodyPublisher", "java.net.http.HttpRequest", "BodyPublisher", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.RequestPublishers$FilePublisher",
		"java.lang.Object",
		"java.net.http.HttpRequest$BodyPublisher",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.RequestPublishers"
	};
	$loadClass(RequestPublishers$FilePublisher, name, initialize, &classInfo$$, RequestPublishers$FilePublisher::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RequestPublishers$FilePublisher);
	});
	return class$;
}

$Class* RequestPublishers$FilePublisher::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk