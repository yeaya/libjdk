#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$2.h>
#include <com/sun/tools/javac/code/Type.h>
#include <com/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/List.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/BiPredicate.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $Resolve$MethodResolutionDiagHelper$TemplateArray = $Array<::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template>;
using $Type = ::com::sun::tools::javac::code::Type;
using $Resolve$MethodResolutionDiagHelper$Template = ::com::sun::tools::javac::comp::Resolve$MethodResolutionDiagHelper$Template;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $List = ::com::sun::tools::javac::util::List;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $BiPredicate = ::java::util::function::BiPredicate;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0 : public $BiPredicate {
	$class(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0, $NO_CLASS_INIT, $BiPredicate)
public:
	void init$(Resolve$MethodResolutionDiagHelper$2* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* o, Object$* ts) override {
		 return $nc(inst$)->lambda$$0(o, $cast($List, ts));
	}
	Resolve$MethodResolutionDiagHelper$2* inst$ = nullptr;
};
$Class* Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$2;)V", nullptr, $PUBLIC, $method(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0, init$, void, Resolve$MethodResolutionDiagHelper$2*)},
		{"test", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0, test, bool, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0",
		"java.lang.Object",
		"java.util.function.BiPredicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0);
	});
	return class$;
}
$Class* Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::class$ = nullptr;

class Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1 : public $Predicate {
	$class(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$(Resolve$MethodResolutionDiagHelper$2* inst, $List* ts) {
		$set(this, inst$, inst);
		$set(this, ts, ts);
	}
	virtual bool test(Object$* o) override {
		 return $nc(inst$)->lambda$containsAny$1(ts, o);
	}
	Resolve$MethodResolutionDiagHelper$2* inst$ = nullptr;
	$List* ts = nullptr;
};
$Class* Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, inst$)},
		{"ts", "Lcom/sun/tools/javac/util/List;", nullptr, $PUBLIC, $field(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, ts)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$2;Lcom/sun/tools/javac/util/List;)V", nullptr, $PUBLIC, $method(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, init$, void, Resolve$MethodResolutionDiagHelper$2*, $List*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1);
	});
	return class$;
}
$Class* Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::class$ = nullptr;

void Resolve$MethodResolutionDiagHelper$2::init$($String* key, $Resolve$MethodResolutionDiagHelper$TemplateArray* subTemplates) {
	$Resolve$MethodResolutionDiagHelper$Template::init$(key, subTemplates);
	$set(this, containsPredicate, $new(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0, this));
}

bool Resolve$MethodResolutionDiagHelper$2::matches(Object$* o) {
	$useLocalObjectStack();
	if (!$Resolve$MethodResolutionDiagHelper$Template::matches(o)) {
		return false;
	}
	$var($JCDiagnostic, d, $cast($JCDiagnostic, o));
	$var($List, tvars, $cast($List, $nc($($nc(d)->getArgs()))->get(0)));
	return !containsAny(d, tvars);
}

bool Resolve$MethodResolutionDiagHelper$2::containsAny($JCDiagnostic* d, $List* ts) {
	$useLocalObjectStack();
	return $$nc($Stream::of($($nc(d)->getArgs())))->anyMatch($$new(Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1, this, ts));
}

bool Resolve$MethodResolutionDiagHelper$2::lambda$containsAny$1($List* ts, Object$* o) {
	return $nc(this->containsPredicate)->test(o, ts);
}

bool Resolve$MethodResolutionDiagHelper$2::lambda$$0(Object$* o, $List* ts) {
	$useLocalObjectStack();
	{
		$var($Type, type, nullptr);
		$var($JCDiagnostic, diagnostic, nullptr);
		bool var$0 = $instanceOf($Type, o);
		if (var$0) {
			$assign(type, $cast($Type, o));
			var$0 = true;
		}
		if (var$0) {
			return $nc(type)->containsAny(ts);
		} else {
			bool var$1 = $instanceOf($JCDiagnostic, o);
			if (var$1) {
				$assign(diagnostic, $cast($JCDiagnostic, o));
				var$1 = true;
			}
			if (var$1) {
				return containsAny(diagnostic, ts);
			} else {
				return false;
			}
		}
	}
}

Resolve$MethodResolutionDiagHelper$2::Resolve$MethodResolutionDiagHelper$2() {
}

$Class* Resolve$MethodResolutionDiagHelper$2::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0")) {
			return Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1")) {
			return Resolve$MethodResolutionDiagHelper$2$$Lambda$lambda$containsAny$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"containsPredicate", "Ljava/util/function/BiPredicate;", "Ljava/util/function/BiPredicate<Ljava/lang/Object;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;>;", 0, $field(Resolve$MethodResolutionDiagHelper$2, containsPredicate)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;[Lcom/sun/tools/javac/comp/Resolve$MethodResolutionDiagHelper$Template;)V", nullptr, $TRANSIENT, $method(Resolve$MethodResolutionDiagHelper$2, init$, void, $String*, $Resolve$MethodResolutionDiagHelper$TemplateArray*)},
		{"containsAny", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/List;)Z", "(Lcom/sun/tools/javac/util/JCDiagnostic;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/code/Type;>;)Z", 0, $virtualMethod(Resolve$MethodResolutionDiagHelper$2, containsAny, bool, $JCDiagnostic*, $List*)},
		{"lambda$$0", "(Ljava/lang/Object;Lcom/sun/tools/javac/util/List;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Resolve$MethodResolutionDiagHelper$2, lambda$$0, bool, Object$*, $List*)},
		{"lambda$containsAny$1", "(Lcom/sun/tools/javac/util/List;Ljava/lang/Object;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(Resolve$MethodResolutionDiagHelper$2, lambda$containsAny$1, bool, $List*, Object$*)},
		{"matches", "(Ljava/lang/Object;)Z", nullptr, 0, $virtualMethod(Resolve$MethodResolutionDiagHelper$2, matches, bool, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "com.sun.tools.javac.comp.Resolve", "MethodResolutionDiagHelper", $STATIC},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template", "com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper", "Template", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$2",
		"com.sun.tools.javac.comp.Resolve$MethodResolutionDiagHelper$Template",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.Resolve"
	};
	$loadClass(Resolve$MethodResolutionDiagHelper$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Resolve$MethodResolutionDiagHelper$2);
	});
	return class$;
}

$Class* Resolve$MethodResolutionDiagHelper$2::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com