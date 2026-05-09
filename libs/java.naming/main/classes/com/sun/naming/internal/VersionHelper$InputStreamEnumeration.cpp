#include <com/sun/naming/internal/VersionHelper$InputStreamEnumeration.h>
#include <com/sun/naming/internal/VersionHelper.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Enumeration.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $VersionHelper = ::com::sun::naming::internal::VersionHelper;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace naming {
			namespace internal {

class VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0 : public $PrivilegedAction {
	$class(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(VersionHelper$InputStreamEnumeration* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		return $nc(inst$)->lambda$getNextElement$0();
	}
	VersionHelper$InputStreamEnumeration* inst$ = nullptr;
};
$Class* VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/naming/internal/VersionHelper$InputStreamEnumeration;)V", nullptr, $PUBLIC, $method(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0, init$, void, VersionHelper$InputStreamEnumeration*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.naming.internal.VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0);
	});
	return class$;
}
$Class* VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::class$ = nullptr;

void VersionHelper$InputStreamEnumeration::init$($VersionHelper* this$0, $Enumeration* urls) {
	$set(this, this$0, this$0);
	$set(this, urls, urls);
}

$InputStream* VersionHelper$InputStreamEnumeration::getNextElement() {
	$beforeCallerSensitive();
	$var($PrivilegedAction, act, $new(VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0, this));
	return $cast($InputStream, $AccessController::doPrivileged(act));
}

bool VersionHelper$InputStreamEnumeration::hasMore() {
	if (this->nextElement$ != nullptr) {
		return true;
	}
	$set(this, nextElement$, getNextElement());
	return (this->nextElement$ != nullptr);
}

bool VersionHelper$InputStreamEnumeration::hasMoreElements() {
	return hasMore();
}

$Object* VersionHelper$InputStreamEnumeration::next() {
	if (hasMore()) {
		$var($InputStream, res, this->nextElement$);
		$set(this, nextElement$, nullptr);
		return res;
	} else {
		$throwNew($NoSuchElementException);
	}
}

$Object* VersionHelper$InputStreamEnumeration::nextElement() {
	return next();
}

void VersionHelper$InputStreamEnumeration::close() {
}

$InputStream* VersionHelper$InputStreamEnumeration::lambda$getNextElement$0() {
	$useLocalObjectStack();
	while ($nc(this->urls)->hasMoreElements()) {
		try {
			return $$sure($URL, this->urls->nextElement())->openStream();
		} catch ($IOException& e) {
		}
	}
	return nullptr;
}

VersionHelper$InputStreamEnumeration::VersionHelper$InputStreamEnumeration() {
}

$Class* VersionHelper$InputStreamEnumeration::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.naming.internal.VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0")) {
			return VersionHelper$InputStreamEnumeration$$Lambda$lambda$getNextElement$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/naming/internal/VersionHelper;", nullptr, $FINAL | $SYNTHETIC, $field(VersionHelper$InputStreamEnumeration, this$0)},
		{"urls", "Ljava/util/Enumeration;", "Ljava/util/Enumeration<Ljava/net/URL;>;", $PRIVATE | $FINAL, $field(VersionHelper$InputStreamEnumeration, urls)},
		{"nextElement", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(VersionHelper$InputStreamEnumeration, nextElement$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/naming/internal/VersionHelper;Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<Ljava/net/URL;>;)V", 0, $method(VersionHelper$InputStreamEnumeration, init$, void, $VersionHelper*, $Enumeration*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(VersionHelper$InputStreamEnumeration, close, void)},
		{"getNextElement", "()Ljava/io/InputStream;", nullptr, $PRIVATE, $method(VersionHelper$InputStreamEnumeration, getNextElement, $InputStream*)},
		{"hasMore", "()Z", nullptr, $PUBLIC, $virtualMethod(VersionHelper$InputStreamEnumeration, hasMore, bool)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(VersionHelper$InputStreamEnumeration, hasMoreElements, bool)},
		{"lambda$getNextElement$0", "()Ljava/io/InputStream;", nullptr, $PRIVATE | $SYNTHETIC, $method(VersionHelper$InputStreamEnumeration, lambda$getNextElement$0, $InputStream*)},
		{"next", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(VersionHelper$InputStreamEnumeration, next, $Object*)},
		{"nextElement", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(VersionHelper$InputStreamEnumeration, nextElement, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.naming.internal.VersionHelper$InputStreamEnumeration", "com.sun.naming.internal.VersionHelper", "InputStreamEnumeration", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.naming.internal.VersionHelper$InputStreamEnumeration",
		"java.lang.Object",
		"javax.naming.NamingEnumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljavax/naming/NamingEnumeration<Ljava/io/InputStream;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.naming.internal.VersionHelper"
	};
	$loadClass(VersionHelper$InputStreamEnumeration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VersionHelper$InputStreamEnumeration);
	});
	return class$;
}

$Class* VersionHelper$InputStreamEnumeration::class$ = nullptr;

			} // internal
		} // naming
	} // sun
} // com