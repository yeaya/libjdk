#include <com/sun/tools/javac/jvm/ClassReader$CompleterDeproxy.h>
#include <com/sun/tools/javac/code/Attribute$Compound.h>
#include <com/sun/tools/javac/code/DeferredCompletionFailureHandler.h>
#include <com/sun/tools/javac/code/Symbol$ClassSymbol.h>
#include <com/sun/tools/javac/code/Symbol$CompletionFailure.h>
#include <com/sun/tools/javac/code/Symbol.h>
#include <com/sun/tools/javac/comp/Annotate$AnnotationTypeMetadata.h>
#include <com/sun/tools/javac/jvm/ClassReader$AnnotationDeproxy.h>
#include <com/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy.h>
#include <com/sun/tools/javac/jvm/ClassReader.h>
#include <com/sun/tools/javac/resources/CompilerProperties$Fragments.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Fragment.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Supplier.h>
#include <jcpp.h>

using $Attribute$Compound = ::com::sun::tools::javac::code::Attribute$Compound;
using $Symbol$ClassSymbol = ::com::sun::tools::javac::code::Symbol$ClassSymbol;
using $Symbol$CompletionFailure = ::com::sun::tools::javac::code::Symbol$CompletionFailure;
using $ClassReader = ::com::sun::tools::javac::jvm::ClassReader;
using $ClassReader$AnnotationDeproxy = ::com::sun::tools::javac::jvm::ClassReader$AnnotationDeproxy;
using $ClassReader$CompoundAnnotationProxy = ::com::sun::tools::javac::jvm::ClassReader$CompoundAnnotationProxy;
using $CompilerProperties$Fragments = ::com::sun::tools::javac::resources::CompilerProperties$Fragments;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Supplier = ::java::util::function::Supplier;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

class ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0 : public $Supplier {
	$class(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, $NO_CLASS_INIT, $Supplier)
public:
	void init$(ClassReader$CompleterDeproxy* inst, $Exception* e) {
		$set(this, inst$, inst);
		$set(this, e, e);
	}
	virtual $Object* get() override {
		return $nc(inst$)->lambda$complete$0(e);
	}
	ClassReader$CompleterDeproxy* inst$ = nullptr;
	$Exception* e = nullptr;
};
$Class* ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, inst$)},
		{"e", "Ljava/lang/Exception;", nullptr, $PUBLIC, $field(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader$CompleterDeproxy;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, init$, void, ClassReader$CompleterDeproxy*, $Exception*)},
		{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, get, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.jvm.ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0",
		"java.lang.Object",
		"java.util.function.Supplier",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0);
	});
	return class$;
}
$Class* ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::class$ = nullptr;

void ClassReader$CompleterDeproxy::init$($ClassReader* this$0, $Symbol$ClassSymbol* c, $ClassReader$CompoundAnnotationProxy* target, $ClassReader$CompoundAnnotationProxy* repeatable) {
	$set(this, this$0, this$0);
	$set(this, proxyOn, c);
	$set(this, target, target);
	$set(this, repeatable, repeatable);
}

void ClassReader$CompleterDeproxy::complete($Symbol$ClassSymbol* sym) {
	$useLocalObjectStack();
	$Assert::check(this->proxyOn == sym);
	$var($Attribute$Compound, theTarget, nullptr);
	$var($Attribute$Compound, theRepeatable, nullptr);
	$var($ClassReader$AnnotationDeproxy, deproxy, nullptr);
	try {
		if (this->target != nullptr) {
			$assign(deproxy, $new($ClassReader$AnnotationDeproxy, this->this$0, this->proxyOn));
			$assign(theTarget, deproxy->deproxyCompound(this->target));
		}
		if (this->repeatable != nullptr) {
			$assign(deproxy, $new($ClassReader$AnnotationDeproxy, this->this$0, this->proxyOn));
			$assign(theRepeatable, deproxy->deproxyCompound(this->repeatable));
		}
	} catch ($Exception& e) {
		$throwNew($Symbol$CompletionFailure, sym, $$new(ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0, this, e), this->this$0->dcfh);
	}
	$$nc($nc(sym)->getAnnotationTypeMetadata())->setTarget(theTarget);
	$$nc(sym->getAnnotationTypeMetadata())->setRepeatable(theRepeatable);
}

$JCDiagnostic* ClassReader$CompleterDeproxy::lambda$complete$0($Exception* e) {
	$useLocalObjectStack();
	return $nc(this->this$0->diagFactory)->fragment($($CompilerProperties$Fragments::ExceptionMessage($($nc(e)->getMessage()))));
}

ClassReader$CompleterDeproxy::ClassReader$CompleterDeproxy() {
}

$Class* ClassReader$CompleterDeproxy::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.jvm.ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0")) {
			return ClassReader$CompleterDeproxy$$Lambda$lambda$complete$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/jvm/ClassReader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassReader$CompleterDeproxy, this$0)},
		{"proxyOn", "Lcom/sun/tools/javac/code/Symbol$ClassSymbol;", nullptr, 0, $field(ClassReader$CompleterDeproxy, proxyOn)},
		{"target", "Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;", nullptr, 0, $field(ClassReader$CompleterDeproxy, target)},
		{"repeatable", "Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;", nullptr, 0, $field(ClassReader$CompleterDeproxy, repeatable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/jvm/ClassReader;Lcom/sun/tools/javac/code/Symbol$ClassSymbol;Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;Lcom/sun/tools/javac/jvm/ClassReader$CompoundAnnotationProxy;)V", nullptr, $PUBLIC, $method(ClassReader$CompleterDeproxy, init$, void, $ClassReader*, $Symbol$ClassSymbol*, $ClassReader$CompoundAnnotationProxy*, $ClassReader$CompoundAnnotationProxy*)},
		{"complete", "(Lcom/sun/tools/javac/code/Symbol$ClassSymbol;)V", nullptr, $PUBLIC, $virtualMethod(ClassReader$CompleterDeproxy, complete, void, $Symbol$ClassSymbol*)},
		{"lambda$complete$0", "(Ljava/lang/Exception;)Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PRIVATE | $SYNTHETIC, $method(ClassReader$CompleterDeproxy, lambda$complete$0, $JCDiagnostic*, $Exception*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ClassReader$CompleterDeproxy", "com.sun.tools.javac.jvm.ClassReader", "CompleterDeproxy", $PRIVATE},
		{"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter", "com.sun.tools.javac.comp.Annotate", "AnnotationTypeCompleter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.jvm.ClassReader$CompleterDeproxy",
		"java.lang.Object",
		"com.sun.tools.javac.comp.Annotate$AnnotationTypeCompleter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.ClassReader"
	};
	$loadClass(ClassReader$CompleterDeproxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassReader$CompleterDeproxy);
	});
	return class$;
}

$Class* ClassReader$CompleterDeproxy::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com