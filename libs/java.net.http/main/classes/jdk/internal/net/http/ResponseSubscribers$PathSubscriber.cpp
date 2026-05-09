#include <jdk/internal/net/http/ResponseSubscribers$PathSubscriber.h>
#include <java/io/Closeable.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/Flow$Subscription.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/function/IntFunction.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/net/http/ResponseSubscribers.h>
#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef EMPTY_BB_ARRAY
#undef EMPTY_FILE_PERMISSIONS

using $CloseableArray = $Array<::java::io::Closeable>;
using $FilePermissionArray = $Array<::java::io::FilePermission>;
using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $PermissionArray = $Array<::java::security::Permission>;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Path = ::java::nio::file::Path;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $Flow$Subscription = ::java::util::concurrent::Flow$Subscription;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $IntFunction = ::java::util::function::IntFunction;
using $ResponseSubscribers = ::jdk::internal::net::http::ResponseSubscribers;
using $MinimalFuture = ::jdk::internal::net::http::common::MinimalFuture;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0 : public $IntFunction {
	$class(ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0, $NO_CLASS_INIT, $IntFunction)
public:
	void init$() {
	}
	virtual $Object* apply(int32_t x$0) override {
		return ResponseSubscribers$PathSubscriber::lambda$new$0(x$0);
	}
};
$Class* ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0, init$, void)},
		{"apply", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0, apply, $Object*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.util.function.IntFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0::class$ = nullptr;

class ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1 : public $PrivilegedExceptionAction {
	$class(ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$(ResponseSubscribers$PathSubscriber* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		return $of($nc(inst$)->lambda$onSubscribe$1());
	}
	ResponseSubscribers$PathSubscriber* inst$ = nullptr;
};
$Class* ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/ResponseSubscribers$PathSubscriber;)V", nullptr, $PUBLIC, $method(ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1, init$, void, ResponseSubscribers$PathSubscriber*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1);
	});
	return class$;
}
$Class* ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1::class$ = nullptr;

class ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2 : public $PrivilegedAction {
	$class(ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(ResponseSubscribers$PathSubscriber* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		return $nc(inst$)->lambda$close$2();
	}
	ResponseSubscribers$PathSubscriber* inst$ = nullptr;
};
$Class* ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/ResponseSubscribers$PathSubscriber;)V", nullptr, $PUBLIC, $method(ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2, init$, void, ResponseSubscribers$PathSubscriber*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2);
	});
	return class$;
}
$Class* ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2::class$ = nullptr;

bool ResponseSubscribers$PathSubscriber::$assertionsDisabled = false;
$FilePermissionArray* ResponseSubscribers$PathSubscriber::EMPTY_FILE_PERMISSIONS = nullptr;

$String* ResponseSubscribers$PathSubscriber::pathForSecurityCheck($Path* path) {
	$init(ResponseSubscribers$PathSubscriber);
	return $$nc($nc(path)->toFile())->getPath();
}

ResponseSubscribers$PathSubscriber* ResponseSubscribers$PathSubscriber::create($Path* file, $List* options) {
	$init(ResponseSubscribers$PathSubscriber);
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	$var($FilePermission, filePermission, nullptr);
	if (sm != nullptr) {
		try {
			$var($String, fn, pathForSecurityCheck(file));
			$var($FilePermission, writePermission, $new($FilePermission, fn, "write"_s));
			sm->checkPermission(writePermission);
			$assign(filePermission, writePermission);
		} catch ($UnsupportedOperationException& ignored) {
		}
	}
	if (!ResponseSubscribers$PathSubscriber::$assertionsDisabled && !(filePermission == nullptr || $$nc(filePermission->getActions())->equals("write"_s))) {
		$throwNew($AssertionError);
	}
	$var($AccessControlContext, acc, sm != nullptr ? $AccessController::getContext() : ($AccessControlContext*)nullptr);
	return $new(ResponseSubscribers$PathSubscriber, file, options, acc, $$new($FilePermissionArray, {filePermission}));
}

void ResponseSubscribers$PathSubscriber::init$($Path* file, $List* options, $AccessControlContext* acc, $FilePermissionArray* filePermissions) {
	$useLocalObjectStack();
	$set(this, result, $new($MinimalFuture));
	$set(this, subscribed, $new($AtomicBoolean));
	$set(this, file, file);
	$set(this, options, $cast($OpenOptionArray, $$nc($nc(options)->stream())->toArray($$new(ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0))));
	$set(this, acc, acc);
	$set(this, filePermissions, filePermissions == nullptr || filePermissions->get(0) == nullptr ? ResponseSubscribers$PathSubscriber::EMPTY_FILE_PERMISSIONS : filePermissions);
	this->isDefaultFS$ = isDefaultFS(file);
}

bool ResponseSubscribers$PathSubscriber::isDefaultFS($Path* file) {
	$init(ResponseSubscribers$PathSubscriber);
	try {
		$nc(file)->toFile();
		return true;
	} catch ($UnsupportedOperationException& uoe) {
		return false;
	}
	$shouldNotReachHere();
}

void ResponseSubscribers$PathSubscriber::onSubscribe($Flow$Subscription* subscription) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Objects::requireNonNull(subscription);
	if (!this->subscribed->compareAndSet(false, true)) {
		subscription->cancel();
		return;
	}
	$set(this, subscription, subscription);
	if (this->acc == nullptr) {
		try {
			$set(this, out, $FileChannel::open(this->file, this->options));
		} catch ($IOException& ioe) {
			this->result->completeExceptionally(ioe);
			subscription->cancel();
			return;
		}
	} else {
		try {
			$var($PrivilegedExceptionAction, pa, $new(ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1, this));
			$set(this, out, this->isDefaultFS$ ? $cast($FileChannel, $AccessController::doPrivileged(pa, this->acc, $cast($PermissionArray, this->filePermissions))) : $cast($FileChannel, $AccessController::doPrivileged(pa, this->acc)));
		} catch ($PrivilegedActionException& pae) {
			$var($Throwable, t, pae->getCause() != nullptr ? pae->getCause() : $cast($Throwable, pae));
			this->result->completeExceptionally(t);
			subscription->cancel();
			return;
		} catch ($Exception& e) {
			this->result->completeExceptionally(e);
			subscription->cancel();
			return;
		}
	}
	subscription->request(1);
}

void ResponseSubscribers$PathSubscriber::onNext($List* items) {
	try {
		$init($Utils);
		$nc(this->out)->write($$cast($ByteBufferArray, $nc(items)->toArray($Utils::EMPTY_BB_ARRAY)));
	} catch ($IOException& ex) {
		close();
		$nc(this->subscription)->cancel();
		this->result->completeExceptionally(ex);
	}
	$nc(this->subscription)->request(1);
}

void ResponseSubscribers$PathSubscriber::onError($Throwable* e) {
	this->result->completeExceptionally(e);
	close();
}

void ResponseSubscribers$PathSubscriber::onComplete() {
	close();
	this->result->complete(this->file);
}

$CompletionStage* ResponseSubscribers$PathSubscriber::getBody() {
	return this->result;
}

void ResponseSubscribers$PathSubscriber::close() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (this->acc == nullptr) {
		$Utils::close($$new($CloseableArray, {$cast($AbstractInterruptibleChannel, this->out)}));
	} else {
		$var($PrivilegedAction, pa, $new(ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2, this));
		if (this->isDefaultFS$) {
			$AccessController::doPrivileged(pa, this->acc, $cast($PermissionArray, this->filePermissions));
		} else {
			$AccessController::doPrivileged(pa, this->acc);
		}
	}
}

void ResponseSubscribers$PathSubscriber::onNext(Object$* items) {
	this->onNext($cast($List, items));
}

$Void* ResponseSubscribers$PathSubscriber::lambda$close$2() {
	$Utils::close($$new($CloseableArray, {$cast($AbstractInterruptibleChannel, this->out)}));
	return nullptr;
}

$FileChannel* ResponseSubscribers$PathSubscriber::lambda$onSubscribe$1() {
	return $FileChannel::open(this->file, this->options);
}

$OpenOptionArray* ResponseSubscribers$PathSubscriber::lambda$new$0(int32_t x$0) {
	$init(ResponseSubscribers$PathSubscriber);
	return $new($OpenOptionArray, x$0);
}

void ResponseSubscribers$PathSubscriber::clinit$($Class* clazz) {
	$load($ResponseSubscribers);
	ResponseSubscribers$PathSubscriber::$assertionsDisabled = !$ResponseSubscribers::class$->desiredAssertionStatus();
	$assignStatic(ResponseSubscribers$PathSubscriber::EMPTY_FILE_PERMISSIONS, $new($FilePermissionArray, 0));
}

ResponseSubscribers$PathSubscriber::ResponseSubscribers$PathSubscriber() {
}

$Class* ResponseSubscribers$PathSubscriber::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0")) {
			return ResponseSubscribers$PathSubscriber$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1")) {
			return ResponseSubscribers$PathSubscriber$$Lambda$lambda$onSubscribe$1$1::load$(name, initialize);
		}
		if (name->equals("jdk.internal.net.http.ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2")) {
			return ResponseSubscribers$PathSubscriber$$Lambda$lambda$close$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ResponseSubscribers$PathSubscriber, $assertionsDisabled)},
		{"EMPTY_FILE_PERMISSIONS", "[Ljava/io/FilePermission;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResponseSubscribers$PathSubscriber, EMPTY_FILE_PERMISSIONS)},
		{"file", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(ResponseSubscribers$PathSubscriber, file)},
		{"options", "[Ljava/nio/file/OpenOption;", nullptr, $PRIVATE | $FINAL, $field(ResponseSubscribers$PathSubscriber, options)},
		{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(ResponseSubscribers$PathSubscriber, acc)},
		{"filePermissions", "[Ljava/io/FilePermission;", nullptr, $PRIVATE | $FINAL, $field(ResponseSubscribers$PathSubscriber, filePermissions)},
		{"isDefaultFS", "Z", nullptr, $PRIVATE | $FINAL, $field(ResponseSubscribers$PathSubscriber, isDefaultFS$)},
		{"result", "Ljava/util/concurrent/CompletableFuture;", "Ljava/util/concurrent/CompletableFuture<Ljava/nio/file/Path;>;", $PRIVATE | $FINAL, $field(ResponseSubscribers$PathSubscriber, result)},
		{"subscribed", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(ResponseSubscribers$PathSubscriber, subscribed)},
		{"subscription", "Ljava/util/concurrent/Flow$Subscription;", nullptr, $PRIVATE | $VOLATILE, $field(ResponseSubscribers$PathSubscriber, subscription)},
		{"out", "Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $VOLATILE, $field(ResponseSubscribers$PathSubscriber, out)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/file/Path;Ljava/util/List;Ljava/security/AccessControlContext;[Ljava/io/FilePermission;)V", "(Ljava/nio/file/Path;Ljava/util/List<Ljava/nio/file/OpenOption;>;Ljava/security/AccessControlContext;[Ljava/io/FilePermission;)V", $TRANSIENT, $method(ResponseSubscribers$PathSubscriber, init$, void, $Path*, $List*, $AccessControlContext*, $FilePermissionArray*)},
		{"close", "()V", nullptr, $PRIVATE, $method(ResponseSubscribers$PathSubscriber, close, void)},
		{"create", "(Ljava/nio/file/Path;Ljava/util/List;)Ljdk/internal/net/http/ResponseSubscribers$PathSubscriber;", "(Ljava/nio/file/Path;Ljava/util/List<Ljava/nio/file/OpenOption;>;)Ljdk/internal/net/http/ResponseSubscribers$PathSubscriber;", $PUBLIC | $STATIC, $staticMethod(ResponseSubscribers$PathSubscriber, create, ResponseSubscribers$PathSubscriber*, $Path*, $List*)},
		{"getBody", "()Ljava/util/concurrent/CompletionStage;", "()Ljava/util/concurrent/CompletionStage<Ljava/nio/file/Path;>;", $PUBLIC, $virtualMethod(ResponseSubscribers$PathSubscriber, getBody, $CompletionStage*)},
		{"isDefaultFS", "(Ljava/nio/file/Path;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(ResponseSubscribers$PathSubscriber, isDefaultFS, bool, $Path*)},
		{"lambda$close$2", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(ResponseSubscribers$PathSubscriber, lambda$close$2, $Void*)},
		{"lambda$new$0", "(I)[Ljava/nio/file/OpenOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ResponseSubscribers$PathSubscriber, lambda$new$0, $OpenOptionArray*, int32_t)},
		{"lambda$onSubscribe$1", "()Ljava/nio/channels/FileChannel;", nullptr, $PRIVATE | $SYNTHETIC, $method(ResponseSubscribers$PathSubscriber, lambda$onSubscribe$1, $FileChannel*), "java.lang.Exception"},
		{"onComplete", "()V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PathSubscriber, onComplete, void)},
		{"onError", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PathSubscriber, onError, void, $Throwable*)},
		{"onNext", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $virtualMethod(ResponseSubscribers$PathSubscriber, onNext, void, $List*)},
		{"onNext", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(ResponseSubscribers$PathSubscriber, onNext, void, Object$*)},
		{"onSubscribe", "(Ljava/util/concurrent/Flow$Subscription;)V", nullptr, $PUBLIC, $virtualMethod(ResponseSubscribers$PathSubscriber, onSubscribe, void, $Flow$Subscription*)},
		{"pathForSecurityCheck", "(Ljava/nio/file/Path;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(ResponseSubscribers$PathSubscriber, pathForSecurityCheck, $String*, $Path*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.ResponseSubscribers$PathSubscriber", "jdk.internal.net.http.ResponseSubscribers", "PathSubscriber", $PUBLIC | $STATIC},
		{"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber", "jdk.internal.net.http.ResponseSubscribers", "TrustedSubscriber", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.internal.net.http.ResponseSubscribers$PathSubscriber",
		"java.lang.Object",
		"jdk.internal.net.http.ResponseSubscribers$TrustedSubscriber",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljdk/internal/net/http/ResponseSubscribers$TrustedSubscriber<Ljava/nio/file/Path;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.ResponseSubscribers"
	};
	$loadClass(ResponseSubscribers$PathSubscriber, name, initialize, &classInfo$$, ResponseSubscribers$PathSubscriber::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ResponseSubscribers$PathSubscriber);
	});
	return class$;
}

$Class* ResponseSubscribers$PathSubscriber::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk