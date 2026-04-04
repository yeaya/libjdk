#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$1.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/util/SimpleElementVisitor14.h>
#include <jcpp.h>

using $PrintingProcessor$PrintingElementVisitor = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $SimpleElementVisitor14 = ::javax::lang::model::util::SimpleElementVisitor14;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

void PrintingProcessor$PrintingElementVisitor$1::init$($PrintingProcessor$PrintingElementVisitor* this$0) {
	$set(this, this$0, this$0);
	$SimpleElementVisitor14::init$();
}

$NestingKind* PrintingProcessor$PrintingElementVisitor$1::visitType($TypeElement* e, $Void* p) {
	return $nc(e)->getNestingKind();
}

$Object* PrintingProcessor$PrintingElementVisitor$1::visitType($TypeElement* e, Object$* p) {
	return $of(this->visitType(e, $cast($Void, p)));
}

PrintingProcessor$PrintingElementVisitor$1::PrintingProcessor$PrintingElementVisitor$1() {
}

$Class* PrintingProcessor$PrintingElementVisitor$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $FINAL | $SYNTHETIC, $field(PrintingProcessor$PrintingElementVisitor$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;)V", nullptr, 0, $method(PrintingProcessor$PrintingElementVisitor$1, init$, void, $PrintingProcessor$PrintingElementVisitor*)},
		{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Void;)Ljavax/lang/model/element/NestingKind;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$1, visitType, $NestingKind*, $TypeElement*, $Void*)},
		{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$1, visitType, $Object*, $TypeElement*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor",
		"visitExecutable",
		"(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "com.sun.tools.javac.processing.PrintingProcessor", "PrintingElementVisitor", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$1",
		"javax.lang.model.util.SimpleElementVisitor14",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/lang/model/util/SimpleElementVisitor14<Ljavax/lang/model/element/NestingKind;Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.processing.PrintingProcessor"
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor$1);
	});
	return class$;
}

$Class* PrintingProcessor$PrintingElementVisitor$1::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com