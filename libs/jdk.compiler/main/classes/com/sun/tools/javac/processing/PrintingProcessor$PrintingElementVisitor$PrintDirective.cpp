#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$PrintDirective.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/function/Function.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/ModuleElement$ExportsDirective.h>
#include <javax/lang/model/element/ModuleElement$OpensDirective.h>
#include <javax/lang/model/element/ModuleElement$ProvidesDirective.h>
#include <javax/lang/model/element/ModuleElement$RequiresDirective.h>
#include <javax/lang/model/element/ModuleElement$UsesDirective.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/QualifiedNameable.h>
#include <javax/lang/model/element/TypeElement.h>
#include <jcpp.h>

using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $List = ::java::util::List;
using $Function = ::java::util::function::Function;
using $Collectors = ::java::util::stream::Collectors;
using $ModuleElement$ExportsDirective = ::javax::lang::model::element::ModuleElement$ExportsDirective;
using $ModuleElement$OpensDirective = ::javax::lang::model::element::ModuleElement$OpensDirective;
using $ModuleElement$ProvidesDirective = ::javax::lang::model::element::ModuleElement$ProvidesDirective;
using $ModuleElement$RequiresDirective = ::javax::lang::model::element::ModuleElement$RequiresDirective;
using $ModuleElement$UsesDirective = ::javax::lang::model::element::ModuleElement$UsesDirective;
using $QualifiedNameable = ::javax::lang::model::element::QualifiedNameable;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $sure($QualifiedNameable, inst$)->getQualifiedName();
	}
};
$Class* PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName);
	});
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::class$ = nullptr;

void PrintingProcessor$PrintingElementVisitor$PrintDirective::init$($PrintWriter* writer) {
	$set(this, writer, writer);
}

$Void* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitExports($ModuleElement$ExportsDirective* d, $Void* p) {
	$useLocalObjectStack();
	$nc(this->writer)->print("exports "_s);
	this->writer->print($($$nc($nc(d)->getPackage())->getQualifiedName()));
	printModuleList($(d->getTargetModules()));
	return nullptr;
}

$Void* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitOpens($ModuleElement$OpensDirective* d, $Void* p) {
	$useLocalObjectStack();
	$nc(this->writer)->print("opens "_s);
	this->writer->print($($$nc($nc(d)->getPackage())->getQualifiedName()));
	printModuleList($(d->getTargetModules()));
	return nullptr;
}

$Void* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitProvides($ModuleElement$ProvidesDirective* d, $Void* p) {
	$useLocalObjectStack();
	$nc(this->writer)->print("provides "_s);
	this->writer->print($($$nc($nc(d)->getService())->getQualifiedName()));
	this->writer->print(" with "_s);
	printNameableList($(d->getImplementations()));
	return nullptr;
}

$Void* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitRequires($ModuleElement$RequiresDirective* d, $Void* p) {
	$useLocalObjectStack();
	$nc(this->writer)->print("requires "_s);
	if ($nc(d)->isStatic()) {
		this->writer->print("static "_s);
	}
	if (d->isTransitive()) {
		this->writer->print("transitive "_s);
	}
	this->writer->print($($$nc(d->getDependency())->getQualifiedName()));
	return nullptr;
}

$Void* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitUses($ModuleElement$UsesDirective* d, $Void* p) {
	$useLocalObjectStack();
	$nc(this->writer)->print("uses "_s);
	this->writer->print($($$nc($nc(d)->getService())->getQualifiedName()));
	return nullptr;
}

void PrintingProcessor$PrintingElementVisitor$PrintDirective::printModuleList($List* modules) {
	if (modules != nullptr) {
		$nc(this->writer)->print(" to "_s);
		printNameableList(modules);
	}
}

void PrintingProcessor$PrintingElementVisitor$PrintDirective::printNameableList($List* nameables) {
	$useLocalObjectStack();
	$nc(this->writer)->print($$cast($String, $$nc($$nc($nc(nameables)->stream())->map($$new(PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName)))->collect($($Collectors::joining(", "_s)))));
}

$Object* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitProvides($ModuleElement$ProvidesDirective* d, Object$* p) {
	return this->visitProvides(d, $cast($Void, p));
}

$Object* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitUses($ModuleElement$UsesDirective* d, Object$* p) {
	return this->visitUses(d, $cast($Void, p));
}

$Object* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitOpens($ModuleElement$OpensDirective* d, Object$* p) {
	return this->visitOpens(d, $cast($Void, p));
}

$Object* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitExports($ModuleElement$ExportsDirective* d, Object$* p) {
	return this->visitExports(d, $cast($Void, p));
}

$Object* PrintingProcessor$PrintingElementVisitor$PrintDirective::visitRequires($ModuleElement$RequiresDirective* d, Object$* p) {
	return this->visitRequires(d, $cast($Void, p));
}

PrintingProcessor$PrintingElementVisitor$PrintDirective::PrintingProcessor$PrintingElementVisitor$PrintDirective() {
}

$Class* PrintingProcessor$PrintingElementVisitor$PrintDirective::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName")) {
			return PrintingProcessor$PrintingElementVisitor$PrintDirective$$Lambda$getQualifiedName::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"writer", "Ljava/io/PrintWriter;", nullptr, $PRIVATE | $FINAL, $field(PrintingProcessor$PrintingElementVisitor$PrintDirective, writer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/PrintWriter;)V", nullptr, 0, $method(PrintingProcessor$PrintingElementVisitor$PrintDirective, init$, void, $PrintWriter*)},
		{"printModuleList", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljavax/lang/model/element/ModuleElement;>;)V", $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor$PrintDirective, printModuleList, void, $List*)},
		{"printNameableList", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljavax/lang/model/element/QualifiedNameable;>;)V", $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor$PrintDirective, printNameableList, void, $List*)},
		{"visitExports", "(Ljavax/lang/model/element/ModuleElement$ExportsDirective;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective, visitExports, $Void*, $ModuleElement$ExportsDirective*, $Void*)},
		{"visitExports", "(Ljavax/lang/model/element/ModuleElement$ExportsDirective;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective, visitExports, $Object*, $ModuleElement$ExportsDirective*, Object$*)},
		{"visitOpens", "(Ljavax/lang/model/element/ModuleElement$OpensDirective;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective, visitOpens, $Void*, $ModuleElement$OpensDirective*, $Void*)},
		{"visitOpens", "(Ljavax/lang/model/element/ModuleElement$OpensDirective;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective, visitOpens, $Object*, $ModuleElement$OpensDirective*, Object$*)},
		{"visitProvides", "(Ljavax/lang/model/element/ModuleElement$ProvidesDirective;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective, visitProvides, $Void*, $ModuleElement$ProvidesDirective*, $Void*)},
		{"visitProvides", "(Ljavax/lang/model/element/ModuleElement$ProvidesDirective;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective, visitProvides, $Object*, $ModuleElement$ProvidesDirective*, Object$*)},
		{"visitRequires", "(Ljavax/lang/model/element/ModuleElement$RequiresDirective;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective, visitRequires, $Void*, $ModuleElement$RequiresDirective*, $Void*)},
		{"visitRequires", "(Ljavax/lang/model/element/ModuleElement$RequiresDirective;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective, visitRequires, $Object*, $ModuleElement$RequiresDirective*, Object$*)},
		{"visitUses", "(Ljavax/lang/model/element/ModuleElement$UsesDirective;Ljava/lang/Void;)Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective, visitUses, $Void*, $ModuleElement$UsesDirective*, $Void*)},
		{"visitUses", "(Ljavax/lang/model/element/ModuleElement$UsesDirective;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$PrintDirective, visitUses, $Object*, $ModuleElement$UsesDirective*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "com.sun.tools.javac.processing.PrintingProcessor", "PrintingElementVisitor", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective", "com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "PrintDirective", $PRIVATE | $STATIC},
		{"javax.lang.model.element.ModuleElement$DirectiveVisitor", "javax.lang.model.element.ModuleElement", "DirectiveVisitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective",
		"java.lang.Object",
		"javax.lang.model.element.ModuleElement$DirectiveVisitor",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljavax/lang/model/element/ModuleElement$DirectiveVisitor<Ljava/lang/Void;Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.processing.PrintingProcessor"
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor$PrintDirective, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor$PrintDirective);
	});
	return class$;
}

$Class* PrintingProcessor$PrintingElementVisitor$PrintDirective::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com