#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrDiagHandler.h>
#include <com/sun/tools/javac/comp/DeferredAttr$DeferredAttrDiagHandler$PosScanner.h>
#include <com/sun/tools/javac/comp/DeferredAttr.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticPosition.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <com/sun/tools/javac/util/Log$DeferredDiagnosticHandler.h>
#include <com/sun/tools/javac/util/Log.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/Predicate.h>
#include <jcpp.h>

using $DeferredAttr$DeferredAttrDiagHandler$PosScanner = ::com::sun::tools::javac::comp::DeferredAttr$DeferredAttrDiagHandler$PosScanner;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $Log = ::com::sun::tools::javac::util::Log;
using $Log$DeferredDiagnosticHandler = ::com::sun::tools::javac::util::Log$DeferredDiagnosticHandler;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Predicate = ::java::util::function::Predicate;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace comp {

class DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0 : public $Predicate {
	$class(DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$($JCTree* newTree) {
		$set(this, newTree, newTree);
	}
	virtual bool test(Object$* d) override {
		 return DeferredAttr$DeferredAttrDiagHandler::lambda$new$0(newTree, $cast($JCDiagnostic, d));
	}
	$JCTree* newTree = nullptr;
};
$Class* DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"newTree", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $field(DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0, newTree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, $PUBLIC, $method(DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0, init$, void, $JCTree*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0::class$ = nullptr;

void DeferredAttr$DeferredAttrDiagHandler::init$($Log* log, $JCTree* newTree) {
	$Log$DeferredDiagnosticHandler::init$(log, $$new(DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0, newTree));
}

bool DeferredAttr$DeferredAttrDiagHandler::lambda$new$0($JCTree* newTree, $JCDiagnostic* d) {
	$init(DeferredAttr$DeferredAttrDiagHandler);
	$useLocalObjectStack();
	$var($DeferredAttr$DeferredAttrDiagHandler$PosScanner, posScanner, $new($DeferredAttr$DeferredAttrDiagHandler$PosScanner, $($nc(d)->getDiagnosticPosition())));
	posScanner->scan(newTree);
	return posScanner->found;
}

DeferredAttr$DeferredAttrDiagHandler::DeferredAttr$DeferredAttrDiagHandler() {
}

$Class* DeferredAttr$DeferredAttrDiagHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0")) {
			return DeferredAttr$DeferredAttrDiagHandler$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/util/Log;Lcom/sun/tools/javac/tree/JCTree;)V", nullptr, 0, $method(DeferredAttr$DeferredAttrDiagHandler, init$, void, $Log*, $JCTree*)},
		{"lambda$new$0", "(Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/JCDiagnostic;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DeferredAttr$DeferredAttrDiagHandler, lambda$new$0, bool, $JCTree*, $JCDiagnostic*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler", "com.sun.tools.javac.comp.DeferredAttr", "DeferredAttrDiagHandler", $STATIC},
		{"com.sun.tools.javac.util.Log$DeferredDiagnosticHandler", "com.sun.tools.javac.util.Log", "DeferredDiagnosticHandler", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler$PosScanner", "com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler", "PosScanner", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.comp.DeferredAttr$DeferredAttrDiagHandler",
		"com.sun.tools.javac.util.Log$DeferredDiagnosticHandler",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.comp.DeferredAttr"
	};
	$loadClass(DeferredAttr$DeferredAttrDiagHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DeferredAttr$DeferredAttrDiagHandler);
	});
	return class$;
}

$Class* DeferredAttr$DeferredAttrDiagHandler::class$ = nullptr;

				} // comp
			} // javac
		} // tools
	} // sun
} // com