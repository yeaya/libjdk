#include <com/sun/tools/doclint/DocLint.h>
#include <com/sun/tools/doclint/DocLint$1.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Optional.h>
#include <java/util/ServiceLoader$Provider.h>
#include <java/util/ServiceLoader.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef XCHECK_PACKAGE
#undef XMSGS_CUSTOM_PREFIX
#undef XMSGS_OPTION

using $DocLint$1 = ::com::sun::tools::doclint::DocLint$1;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ServiceLoader = ::java::util::ServiceLoader;
using $ServiceLoader$Provider = ::java::util::ServiceLoader$Provider;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace doclint {

class DocLint$$Lambda$lambda$newDocLint$0 : public $Predicate {
	$class(DocLint$$Lambda$lambda$newDocLint$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* p_) override {
		return DocLint::lambda$newDocLint$0($cast($ServiceLoader$Provider, p_));
	}
};
$Class* DocLint$$Lambda$lambda$newDocLint$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DocLint$$Lambda$lambda$newDocLint$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DocLint$$Lambda$lambda$newDocLint$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.doclint.DocLint$$Lambda$lambda$newDocLint$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(DocLint$$Lambda$lambda$newDocLint$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocLint$$Lambda$lambda$newDocLint$0);
	});
	return class$;
}
$Class* DocLint$$Lambda$lambda$newDocLint$0::class$ = nullptr;

$String* DocLint::XMSGS_OPTION = nullptr;
$String* DocLint::XMSGS_CUSTOM_PREFIX = nullptr;
$String* DocLint::XCHECK_PACKAGE = nullptr;
$ServiceLoader$Provider* DocLint::docLintProvider = nullptr;

void DocLint::init$() {
}

DocLint* DocLint::newDocLint() {
	$init(DocLint);
	$synchronized(class$) {
		$useLocalObjectStack();
		$beforeCallerSensitive();
		if (DocLint::docLintProvider == nullptr) {
			$assignStatic(DocLint::docLintProvider, $cast($ServiceLoader$Provider, $$nc($$nc($$nc($$nc($ServiceLoader::load(DocLint::class$, $($ClassLoader::getSystemClassLoader())))->stream())->filter($$new(DocLint$$Lambda$lambda$newDocLint$0)))->findFirst())->orElse($$new($DocLint$1))));
		}
		return $cast(DocLint, $nc(DocLint::docLintProvider)->get());
	}
}

bool DocLint::lambda$newDocLint$0($ServiceLoader$Provider* p_) {
	$init(DocLint);
	$useLocalObjectStack();
	return $$nc($$sure(DocLint, $nc(p_)->get())->getName())->equals("doclint"_s);
}

DocLint::DocLint() {
}

void DocLint::clinit$($Class* clazz) {
	$assignStatic(DocLint::XMSGS_OPTION, "-Xmsgs"_s);
	$assignStatic(DocLint::XMSGS_CUSTOM_PREFIX, "-Xmsgs:"_s);
	$assignStatic(DocLint::XCHECK_PACKAGE, "-XcheckPackage:"_s);
}

$Class* DocLint::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.doclint.DocLint$$Lambda$lambda$newDocLint$0")) {
			return DocLint$$Lambda$lambda$newDocLint$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"XMSGS_OPTION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocLint, XMSGS_OPTION)},
		{"XMSGS_CUSTOM_PREFIX", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocLint, XMSGS_CUSTOM_PREFIX)},
		{"XCHECK_PACKAGE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocLint, XCHECK_PACKAGE)},
		{"docLintProvider", "Ljava/util/ServiceLoader$Provider;", "Ljava/util/ServiceLoader$Provider<Lcom/sun/tools/doclint/DocLint;>;", $PRIVATE | $STATIC, $staticField(DocLint, docLintProvider)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DocLint, init$, void)},
		{"isValidOption", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DocLint, isValidOption, bool, $String*)},
		{"lambda$newDocLint$0", "(Ljava/util/ServiceLoader$Provider;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DocLint, lambda$newDocLint$0, bool, $ServiceLoader$Provider*)},
		{"newDocLint", "()Lcom/sun/tools/doclint/DocLint;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(DocLint, newDocLint, DocLint*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.doclint.DocLint$NoDocLint", "com.sun.tools.doclint.DocLint", "NoDocLint", $PRIVATE | $STATIC},
		{"com.sun.tools.doclint.DocLint$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.tools.doclint.DocLint",
		"java.lang.Object",
		"com.sun.source.util.Plugin",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.tools.doclint.DocLint$NoDocLint,com.sun.tools.doclint.DocLint$1"
	};
	$loadClass(DocLint, name, initialize, &classInfo$$, DocLint::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DocLint);
	});
	return class$;
}

$Class* DocLint::class$ = nullptr;

			} // doclint
		} // tools
	} // sun
} // com