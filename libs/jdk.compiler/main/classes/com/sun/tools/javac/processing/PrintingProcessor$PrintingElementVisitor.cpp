#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$1.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$1.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$2.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor$PrintDirective.h>
#include <com/sun/tools/javac/processing/PrintingProcessor.h>
#include <com/sun/tools/javac/util/StringUtils.h>
#include <java/io/PrintWriter.h>
#include <java/io/Serializable.h>
#include <java/io/Writer.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/StringTokenizer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/ModuleElement$Directive.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/element/TypeParameterElement.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/ArrayType.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor6.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <javax/lang/model/util/ElementFilter.h>
#include <javax/lang/model/util/Elements$Origin.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/lang/model/util/SimpleElementVisitor14.h>
#include <jcpp.h>

#undef ABSTRACT
#undef ANNOTATION_TYPE
#undef ANONYMOUS
#undef ARRAY
#undef CLASS
#undef CONSTRUCTOR
#undef ENUM
#undef ENUM_CONSTANT
#undef EXPLICIT
#undef FINAL
#undef INSTANCE_INIT
#undef MANDATED
#undef NONE
#undef PARAMETER
#undef PUBLIC
#undef RECORD
#undef RECORD_COMPONENT
#undef SEALED
#undef STATIC
#undef STATIC_INIT
#undef TOP_LEVEL

using $PrintingProcessor$1 = ::com::sun::tools::javac::processing::PrintingProcessor$1;
using $PrintingProcessor$PrintingElementVisitor$1 = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor$1;
using $PrintingProcessor$PrintingElementVisitor$2 = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor$2;
using $PrintingProcessor$PrintingElementVisitor$PrintDirective = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor$PrintDirective;
using $StringUtils = ::com::sun::tools::javac::util::StringUtils;
using $PrintWriter = ::java::io::PrintWriter;
using $Serializable = ::java::io::Serializable;
using $Writer = ::java::io::Writer;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;
using $AnnotationMirror = ::javax::lang::model::element::AnnotationMirror;
using $AnnotationValue = ::javax::lang::model::element::AnnotationValue;
using $Element = ::javax::lang::model::element::Element;
using $ElementKind = ::javax::lang::model::element::ElementKind;
using $ExecutableElement = ::javax::lang::model::element::ExecutableElement;
using $Modifier = ::javax::lang::model::element::Modifier;
using $ModuleElement = ::javax::lang::model::element::ModuleElement;
using $ModuleElement$Directive = ::javax::lang::model::element::ModuleElement$Directive;
using $NestingKind = ::javax::lang::model::element::NestingKind;
using $PackageElement = ::javax::lang::model::element::PackageElement;
using $Parameterizable = ::javax::lang::model::element::Parameterizable;
using $RecordComponentElement = ::javax::lang::model::element::RecordComponentElement;
using $TypeElement = ::javax::lang::model::element::TypeElement;
using $TypeParameterElement = ::javax::lang::model::element::TypeParameterElement;
using $VariableElement = ::javax::lang::model::element::VariableElement;
using $ArrayType = ::javax::lang::model::type::ArrayType;
using $DeclaredType = ::javax::lang::model::type::DeclaredType;
using $TypeKind = ::javax::lang::model::type::TypeKind;
using $TypeMirror = ::javax::lang::model::type::TypeMirror;
using $ElementFilter = ::javax::lang::model::util::ElementFilter;
using $Elements = ::javax::lang::model::util::Elements;
using $Elements$Origin = ::javax::lang::model::util::Elements$Origin;
using $SimpleElementVisitor14 = ::javax::lang::model::util::SimpleElementVisitor14;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

class PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0, $NO_CLASS_INIT, $Function)
public:
	void init$(PrintingProcessor$PrintingElementVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* recordDes) override {
		 return $of($nc(inst$)->lambda$visitType$0($cast($RecordComponentElement, recordDes)));
	}
	PrintingProcessor$PrintingElementVisitor* inst$ = nullptr;
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;)V", nullptr, $PUBLIC, $method(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0, init$, void, PrintingProcessor$PrintingElementVisitor*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0);
	});
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1 : public $Predicate {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$(PrintingProcessor$PrintingElementVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* elt) override {
		 return $nc(inst$)->lambda$visitType$1($cast($Element, elt));
	}
	PrintingProcessor$PrintingElementVisitor* inst$ = nullptr;
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;)V", nullptr, $PUBLIC, $method(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1, init$, void, PrintingProcessor$PrintingElementVisitor*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1);
	});
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Modifier, inst$)->toString());
	}
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2);
	});
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3, $NO_CLASS_INIT, $Function)
public:
	void init$(PrintingProcessor$PrintingElementVisitor* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* tpe) override {
		 return $of($nc(inst$)->lambda$printFormalTypeParameters$2($cast($TypeParameterElement, tpe)));
	}
	PrintingProcessor$PrintingElementVisitor* inst$ = nullptr;
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;)V", nullptr, $PUBLIC, $method(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3, init$, void, PrintingProcessor$PrintingElementVisitor*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3);
	});
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($ofnc(inst$)->toString());
	}
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4);
	});
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($TypeMirror, inst$)->toString());
	}
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5);
	});
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::class$ = nullptr;

class PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6 : public $Function {
	$class(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* subtype) override {
		 return $of(PrintingProcessor$PrintingElementVisitor::lambda$printPermittedSubclasses$3($cast($TypeMirror, subtype)));
	}
};
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6);
	});
	return class$;
}
$Class* PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::class$ = nullptr;

$StringArray* PrintingProcessor$PrintingElementVisitor::spaces = nullptr;

void PrintingProcessor$PrintingElementVisitor::init$($Writer* w, $Elements* elementUtils) {
	$SimpleElementVisitor14::init$();
	$set(this, writer, $new($PrintWriter, w));
	$set(this, elementUtils, elementUtils);
	this->indentation = 0;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::defaultAction($Element* e, $Boolean* newLine) {
	if (newLine != nullptr && newLine->booleanValue()) {
		$nc(this->writer)->println();
	}
	printDocComment(e);
	printModifiers(e);
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitRecordComponent($RecordComponentElement* e, $Boolean* p) {
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitExecutable($ExecutableElement* e, $Boolean* p) {
	$useLocalObjectStack();
	$ElementKind* kind = $nc(e)->getKind();
	$init($ElementKind);
	if (kind != $ElementKind::STATIC_INIT && kind != $ElementKind::INSTANCE_INIT) {
		$var($Element, enclosing, e->getEnclosingElement());
		$init($NestingKind);
		if (kind == $ElementKind::CONSTRUCTOR && enclosing != nullptr && $equals($NestingKind::ANONYMOUS, ($$new($PrintingProcessor$PrintingElementVisitor$1, this))->visit(enclosing))) {
			return this;
		}
		defaultAction(e, $($Boolean::valueOf(true)));
		printFormalTypeParameters(e, true);
		$init($PrintingProcessor$1);
		switch ($nc($PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((kind))->ordinal())) {
		case 1:
			$nc(this->writer)->print($($$nc(e->getEnclosingElement())->getSimpleName()));
			break;
		case 2:
			$nc(this->writer)->print($($$nc(e->getReturnType())->toString()));
			this->writer->print(" "_s);
			this->writer->print($($$nc(e->getSimpleName())->toString()));
			break;
		}
		$nc(this->writer)->print("("_s);
		printParameters(e);
		this->writer->print(")"_s);
		$var($AnnotationValue, defaultValue, e->getDefaultValue());
		if (defaultValue != nullptr) {
			this->writer->print($$str({" default "_s, defaultValue}));
		}
		printThrows(e);
		this->writer->println(";"_s);
	}
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitType($TypeElement* e, $Boolean* p) {
	$useLocalObjectStack();
	$ElementKind* kind = $nc(e)->getKind();
	$NestingKind* nestingKind = e->getNestingKind();
	$init($NestingKind);
	if ($NestingKind::ANONYMOUS == nestingKind) {
		$nc(this->writer)->print("new "_s);
		$var($List, interfaces, e->getInterfaces());
		if (!$nc(interfaces)->isEmpty()) {
			this->writer->print($(interfaces->get(0)));
		} else {
			this->writer->print($(e->getSuperclass()));
		}
		this->writer->print("("_s);
		if (interfaces->isEmpty()) {
			$var($List, constructors, $ElementFilter::constructorsIn($(e->getEnclosedElements())));
			if (!$nc(constructors)->isEmpty()) {
				printParameters($$cast($ExecutableElement, constructors->get(0)));
			}
		}
		this->writer->print(")"_s);
	} else {
		if (nestingKind == $NestingKind::TOP_LEVEL) {
			$var($PackageElement, pkg, $nc(this->elementUtils)->getPackageOf($cast($Parameterizable, e)));
			if (!$nc(pkg)->isUnnamed()) {
				$nc(this->writer)->print($$str({"package "_s, $(pkg->getQualifiedName()), ";\n"_s}));
			}
		}
		defaultAction($cast($Parameterizable, e), $($Boolean::valueOf(true)));
		$init($PrintingProcessor$1);
		switch ($nc($PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((kind))->ordinal())) {
		case 3:
			$nc(this->writer)->print("@interface"_s);
			break;
		default:
			$nc(this->writer)->print($($StringUtils::toLowerCase($(kind->toString()))));
		}
		$nc(this->writer)->print(" "_s);
		this->writer->print($(e->getSimpleName()));
		printFormalTypeParameters(e, false);
		if (kind == $ElementKind::RECORD) {
			this->writer->print("("_s);
			this->writer->print($$cast($String, $$nc($$nc($$nc(e->getRecordComponents())->stream())->map($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0, this)))->collect($($Collectors::joining(", "_s)))));
			this->writer->print(")"_s);
		}
		if (kind == $ElementKind::CLASS) {
			$var($TypeMirror, supertype, e->getSuperclass());
			$init($TypeKind);
			if ($nc(supertype)->getKind() != $TypeKind::NONE) {
				$var($TypeElement, e2, $cast($TypeElement, $cast($DeclaredType, supertype)->asElement()));
				if ($$nc($nc(e2)->getSuperclass())->getKind() != $TypeKind::NONE) {
					this->writer->print($$str({" extends "_s, supertype}));
				}
			}
		}
		printInterfaces(e);
		printPermittedSubclasses(e);
	}
	$nc(this->writer)->println(" {"_s);
	++this->indentation;
	$init($ElementKind);
	if (kind == $ElementKind::ENUM) {
		$var($List, enclosedElements, $new($ArrayList, $(e->getEnclosedElements())));
		$var($List, enumConstants, $new($ArrayList));
		{
			$var($Iterator, i$, enclosedElements->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Element, element, $cast($Element, i$->next()));
				if ($nc(element)->getKind() == $ElementKind::ENUM_CONSTANT) {
					enumConstants->add(element);
				}
			}
		}
		if (!enumConstants->isEmpty()) {
			int32_t i = 0;
			for (i = 0; i < enumConstants->size() - 1; ++i) {
				$var($Element, var$0, $cast($Element, enumConstants->get(i)));
				this->visit(var$0, $($Boolean::valueOf(true)));
				this->writer->print(","_s);
			}
			$var($Element, var$1, $cast($Element, enumConstants->get(i)));
			this->visit(var$1, $($Boolean::valueOf(true)));
			this->writer->println(";\n"_s);
			enclosedElements->removeAll(enumConstants);
		}
		{
			$var($Iterator, i$, enclosedElements->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Element, element, $cast($Element, i$->next()));
				this->visit(element);
			}
		}
	} else {
		$var($Iterator, i$, $nc((kind != $ElementKind::RECORD ? $(e->getEnclosedElements()) : $($$nc($$nc($$nc(e->getEnclosedElements())->stream())->filter($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1, this)))->toList())))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Element, element, $cast($Element, i$->next()));
			this->visit(element);
		}
	}
	--this->indentation;
	indent();
	this->writer->println("}"_s);
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitVariable($VariableElement* e, $Boolean* newLine) {
	$useLocalObjectStack();
	$ElementKind* kind = $nc(e)->getKind();
	defaultAction(e, newLine);
	$init($ElementKind);
	if (kind == $ElementKind::ENUM_CONSTANT) {
		$nc(this->writer)->print($(e->getSimpleName()));
	} else {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($$nc(e->asType())->toString()));
		var$0->append(" "_s);
		var$0->append($(e->getSimpleName()));
		$nc(this->writer)->print($$str(var$0));
		$var($Object, constantValue, e->getConstantValue());
		if (constantValue != nullptr) {
			this->writer->print(" = "_s);
			this->writer->print($($nc(this->elementUtils)->getConstantExpression(constantValue)));
		}
		this->writer->println(";"_s);
	}
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitTypeParameter($TypeParameterElement* e, $Boolean* p) {
	$nc(this->writer)->print($($nc(e)->getSimpleName()));
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitPackage($PackageElement* e, $Boolean* p) {
	$useLocalObjectStack();
	defaultAction(e, $($Boolean::valueOf(false)));
	if (!$nc(e)->isUnnamed()) {
		$nc(this->writer)->println($$str({"package "_s, $(e->getQualifiedName()), ";"_s}));
	} else {
		$nc(this->writer)->println("// Unnamed package"_s);
	}
	return this;
}

PrintingProcessor$PrintingElementVisitor* PrintingProcessor$PrintingElementVisitor::visitModule($ModuleElement* e, $Boolean* p) {
	$useLocalObjectStack();
	defaultAction(e, $($Boolean::valueOf(false)));
	if (!$nc(e)->isUnnamed()) {
		if (e->isOpen()) {
			$nc(this->writer)->print("open "_s);
		}
		$nc(this->writer)->println($$str({"module "_s, $(e->getQualifiedName()), " {"_s}));
		++this->indentation;
		{
			$var($Iterator, i$, $$nc(e->getDirectives())->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ModuleElement$Directive, directive, $cast($ModuleElement$Directive, i$->next()));
				{
					printDirective(directive);
				}
			}
		}
		--this->indentation;
		this->writer->println("}"_s);
	} else {
		$nc(this->writer)->println("// Unnamed module"_s);
	}
	return this;
}

void PrintingProcessor$PrintingElementVisitor::printDirective($ModuleElement$Directive* directive) {
	indent();
	($$new($PrintingProcessor$PrintingElementVisitor$PrintDirective, this->writer))->visit(directive);
	$nc(this->writer)->println(";"_s);
}

void PrintingProcessor$PrintingElementVisitor::flush() {
	$nc(this->writer)->flush();
}

void PrintingProcessor$PrintingElementVisitor::printDocComment($Element* e) {
	$useLocalObjectStack();
	$var($String, docComment, $nc(this->elementUtils)->getDocComment(e));
	if (docComment != nullptr) {
		$var($StringTokenizer, st, $new($StringTokenizer, docComment, "\n\r"_s));
		indent();
		$nc(this->writer)->println("/**"_s);
		while (st->hasMoreTokens()) {
			indent();
			this->writer->print(" *"_s);
			this->writer->println($(st->nextToken()));
		}
		indent();
		this->writer->println(" */"_s);
	}
}

void PrintingProcessor$PrintingElementVisitor::printModifiers($Element* e) {
	$useLocalObjectStack();
	$ElementKind* kind = $nc(e)->getKind();
	$init($ElementKind);
	if (kind == $ElementKind::PARAMETER || kind == $ElementKind::RECORD_COMPONENT) {
		$nc(this->writer)->print($(annotationsToString(e)));
	} else {
		printAnnotations(e);
		indent();
	}
	if (kind == $ElementKind::ENUM_CONSTANT || kind == $ElementKind::RECORD_COMPONENT) {
		return;
	}
	$var($Set, modifiers, $new($LinkedHashSet));
	modifiers->addAll($(e->getModifiers()));
	{
		$init($PrintingProcessor$1);
		$var($Element, enclosingElement, nullptr);
		switch ($nc($PrintingProcessor$1::$SwitchMap$javax$lang$model$element$ElementKind)->get($nc((kind))->ordinal())) {
		case 3:
		case 4:
			$init($Modifier);
			modifiers->remove($Modifier::ABSTRACT);
			break;
		case 5:
			$init($Modifier);
			modifiers->remove($Modifier::FINAL);
			modifiers->remove($Modifier::ABSTRACT);
			modifiers->remove($Modifier::SEALED);
			break;
		case 6:
			$init($Modifier);
			modifiers->remove($Modifier::FINAL);
			break;
		case 2:
		case 7:
			$assign(enclosingElement, e->getEnclosingElement());
			if (enclosingElement != nullptr && $$nc(enclosingElement->getKind())->isInterface()) {
				$init($Modifier);
				modifiers->remove($Modifier::PUBLIC);
				modifiers->remove($Modifier::ABSTRACT);
				modifiers->remove($Modifier::STATIC);
				modifiers->remove($Modifier::FINAL);
			}
			break;
		}
	}
	if (!modifiers->isEmpty()) {
		$nc(this->writer)->print($$cast($String, $$nc($$nc(modifiers->stream())->map($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2)))->collect($($Collectors::joining(" "_s, ""_s, " "_s)))));
	}
}

void PrintingProcessor$PrintingElementVisitor::printFormalTypeParameters($Parameterizable* e, bool pad) {
	$useLocalObjectStack();
	$var($List, typeParams, $nc(e)->getTypeParameters());
	if (!$nc(typeParams)->isEmpty()) {
		$nc(this->writer)->print($$cast($String, $$nc($$nc(typeParams->stream())->map($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3, this)))->collect($($Collectors::joining(", "_s, "<"_s, ">"_s)))));
		if (pad) {
			this->writer->print(" "_s);
		}
	}
}

$String* PrintingProcessor$PrintingElementVisitor::annotationsToString($Element* e) {
	$useLocalObjectStack();
	$var($List, annotations, $nc(e)->getAnnotationMirrors());
	return $nc(annotations)->isEmpty() ? ""_s : $cast($String, $$nc($$nc(annotations->stream())->map($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4)))->collect($($Collectors::joining(" "_s, ""_s, " "_s))));
}

void PrintingProcessor$PrintingElementVisitor::printAnnotations($Element* e) {
	$useLocalObjectStack();
	$var($List, annots, $nc(e)->getAnnotationMirrors());
	{
		$var($Iterator, i$, $nc(annots)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($AnnotationMirror, annotationMirror, $cast($AnnotationMirror, i$->next()));
			if (!printedContainerAnnotation(e, annotationMirror)) {
				indent();
				$nc(this->writer)->println(annotationMirror);
			}
		}
	}
}

bool PrintingProcessor$PrintingElementVisitor::printedContainerAnnotation($Element* e, $AnnotationMirror* annotationMirror) {
	$useLocalObjectStack();
	$init($Elements$Origin);
	if ($nc(this->elementUtils)->getOrigin(e, annotationMirror) == $Elements$Origin::MANDATED) {
		$var($Set, entries, $$nc($nc(annotationMirror)->getElementValues())->entrySet());
		if ($nc(entries)->size() == 1) {
			$var($DeclaredType, annotationType, annotationMirror->getAnnotationType());
			$var($Element, annotationTypeAsElement, $nc(annotationType)->asElement());
			$var($Map$Entry, entry, $cast($Map$Entry, $$nc(entries->iterator())->next()));
			$var($AnnotationValue, annotationElements, $cast($AnnotationValue, $nc(entry)->getValue()));
			$init($ElementKind);
			if ($nc(annotationTypeAsElement)->getKind() == $ElementKind::ANNOTATION_TYPE) {
				$var($List, annotationMethods, $ElementFilter::methodsIn($(annotationTypeAsElement->getEnclosedElements())));
				if ($nc(annotationMethods)->size() == 1) {
					$var($ExecutableElement, valueMethod, $cast($ExecutableElement, annotationMethods->get(0)));
					$var($TypeMirror, returnType, $nc(valueMethod)->getReturnType());
					bool var$0 = "value"_s->equals($($$nc(valueMethod->getSimpleName())->toString()));
					$init($TypeKind);
					if (var$0 && $nc(returnType)->getKind() == $TypeKind::ARRAY) {
						return $$sure($Boolean, ($$new($PrintingProcessor$PrintingElementVisitor$2, this, $($Boolean::valueOf(false))))->visit(annotationElements))->booleanValue();
					}
				}
			}
		}
	}
	return false;
}

void PrintingProcessor$PrintingElementVisitor::printParameters($ExecutableElement* e) {
	$useLocalObjectStack();
	$var($List, parameters, $nc(e)->getParameters());
	int32_t size = $nc(parameters)->size();
	switch (size) {
	case 0:
		break;
	case 1:
		{
			$var($Iterator, i$, parameters->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($VariableElement, parameter, $cast($VariableElement, i$->next()));
				{
					printModifiers(parameter);
					if (e->isVarArgs()) {
						$var($TypeMirror, tm, $nc(parameter)->asType());
						$init($TypeKind);
						if ($nc(tm)->getKind() != $TypeKind::ARRAY) {
							$throwNew($AssertionError, $$of($str({"Var-args parameter is not an array type: "_s, tm})));
						}
						$load($ArrayType);
						$nc(this->writer)->print($($$sure($ArrayType, $ArrayType::class$->cast(tm))->getComponentType()));
						this->writer->print("..."_s);
					} else {
						$nc(this->writer)->print($($nc(parameter)->asType()));
					}
					$nc(this->writer)->print($$str({" "_s, $($nc(parameter)->getSimpleName())}));
				}
			}
			break;
		}
	default:
		{
			int32_t i = 1;
			{
				$var($Iterator, i$, parameters->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($VariableElement, parameter, $cast($VariableElement, i$->next()));
					{
						if (i == 2) {
							++this->indentation;
						}
						if (i > 1) {
							indent();
						}
						printModifiers(parameter);
						if (i == size && e->isVarArgs()) {
							$var($TypeMirror, tm, $nc(parameter)->asType());
							$init($TypeKind);
							if ($nc(tm)->getKind() != $TypeKind::ARRAY) {
								$throwNew($AssertionError, $$of($str({"Var-args parameter is not an array type: "_s, tm})));
							}
							$load($ArrayType);
							$nc(this->writer)->print($($$sure($ArrayType, $ArrayType::class$->cast(tm))->getComponentType()));
							this->writer->print("..."_s);
						} else {
							$nc(this->writer)->print($($nc(parameter)->asType()));
						}
						$nc(this->writer)->print($$str({" "_s, $($nc(parameter)->getSimpleName())}));
						if (i < size) {
							this->writer->println(","_s);
						}
						++i;
					}
				}
			}
			if (parameters->size() >= 2) {
				--this->indentation;
			}
		}
		break;
	}
}

void PrintingProcessor$PrintingElementVisitor::printInterfaces($TypeElement* e) {
	$useLocalObjectStack();
	$ElementKind* kind = $nc(e)->getKind();
	$init($ElementKind);
	if (kind != $ElementKind::ANNOTATION_TYPE) {
		$var($List, interfaces, e->getInterfaces());
		if (!$nc(interfaces)->isEmpty()) {
			$nc(this->writer)->print(($nc(kind)->isClass() ? " implements "_s : " extends "_s));
			this->writer->print($$cast($String, $$nc($$nc(interfaces->stream())->map($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5)))->collect($($Collectors::joining(", "_s)))));
		}
	}
}

void PrintingProcessor$PrintingElementVisitor::printPermittedSubclasses($TypeElement* e) {
	$useLocalObjectStack();
	$var($List, subtypes, $nc(e)->getPermittedSubclasses());
	if (!$nc(subtypes)->isEmpty()) {
		$nc(this->writer)->print(" permits "_s);
		this->writer->print($$cast($String, $$nc($$nc(subtypes->stream())->map($$new(PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6)))->collect($($Collectors::joining(", "_s)))));
	}
}

void PrintingProcessor$PrintingElementVisitor::printThrows($ExecutableElement* e) {
	$useLocalObjectStack();
	$var($List, thrownTypes, $nc(e)->getThrownTypes());
	int32_t size = $nc(thrownTypes)->size();
	if (size != 0) {
		$nc(this->writer)->print(" throws"_s);
		int32_t i = 1;
		{
			$var($Iterator, i$, thrownTypes->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($TypeMirror, thrownType, $cast($TypeMirror, i$->next()));
				{
					if (i == 1) {
						this->writer->print(" "_s);
					}
					if (i == 2) {
						++this->indentation;
					}
					if (i >= 2) {
						indent();
					}
					this->writer->print(thrownType);
					if (i != size) {
						this->writer->println(", "_s);
					}
					++i;
				}
			}
		}
		if (size >= 2) {
			--this->indentation;
		}
	}
}

void PrintingProcessor$PrintingElementVisitor::indent() {
	int32_t indentation = this->indentation;
	if (indentation < 0) {
		return;
	}
	int32_t maxIndex = PrintingProcessor$PrintingElementVisitor::spaces->length - 1;
	while (indentation > maxIndex) {
		$nc(this->writer)->print(PrintingProcessor$PrintingElementVisitor::spaces->get(maxIndex));
		indentation -= maxIndex;
	}
	$nc(this->writer)->print(PrintingProcessor$PrintingElementVisitor::spaces->get(indentation));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitRecordComponent($RecordComponentElement* e, Object$* p) {
	return this->visitRecordComponent(e, $cast($Boolean, p));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitModule($ModuleElement* e, Object$* p) {
	return this->visitModule(e, $cast($Boolean, p));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitVariable($VariableElement* e, Object$* newLine) {
	return this->visitVariable(e, $cast($Boolean, newLine));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitTypeParameter($TypeParameterElement* e, Object$* p) {
	return this->visitTypeParameter(e, $cast($Boolean, p));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitExecutable($ExecutableElement* e, Object$* p) {
	return this->visitExecutable(e, $cast($Boolean, p));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitType($TypeElement* e, Object$* p) {
	return this->visitType(e, $cast($Boolean, p));
}

$Object* PrintingProcessor$PrintingElementVisitor::visitPackage($PackageElement* e, Object$* p) {
	return this->visitPackage(e, $cast($Boolean, p));
}

$Object* PrintingProcessor$PrintingElementVisitor::defaultAction($Element* e, Object$* newLine) {
	return this->defaultAction(e, $cast($Boolean, newLine));
}

$String* PrintingProcessor$PrintingElementVisitor::lambda$printPermittedSubclasses$3($TypeMirror* subtype) {
	$init(PrintingProcessor$PrintingElementVisitor);
	return $nc(subtype)->toString();
}

$String* PrintingProcessor$PrintingElementVisitor::lambda$printFormalTypeParameters$2($TypeParameterElement* tpe) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(annotationsToString(tpe)));
	var$0->append($($nc($of(tpe))->toString()));
	return $str(var$0);
}

bool PrintingProcessor$PrintingElementVisitor::lambda$visitType$1($Element* elt) {
	$init($Elements$Origin);
	return $nc(this->elementUtils)->getOrigin(elt) == $Elements$Origin::EXPLICIT;
}

$String* PrintingProcessor$PrintingElementVisitor::lambda$visitType$0($RecordComponentElement* recordDes) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(annotationsToString(recordDes)));
	var$0->append($($$nc($nc(recordDes)->asType())->toString()));
	var$0->append(" "_s);
	var$0->append($(recordDes->getSimpleName()));
	return $str(var$0);
}

void PrintingProcessor$PrintingElementVisitor::clinit$($Class* clazz) {
	$assignStatic(PrintingProcessor$PrintingElementVisitor::spaces, $new($StringArray, {
		""_s,
		"  "_s,
		"    "_s,
		"      "_s,
		"        "_s,
		"          "_s,
		"            "_s,
		"              "_s,
		"                "_s,
		"                  "_s,
		"                    "_s
	}));
}

PrintingProcessor$PrintingElementVisitor::PrintingProcessor$PrintingElementVisitor() {
}

$Class* PrintingProcessor$PrintingElementVisitor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0")) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$0::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1")) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$visitType$1$1::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2")) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$toString$2::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3")) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printFormalTypeParameters$2$3::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4")) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$toString$4::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5")) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$toString$5::load$(name, initialize);
		}
		if (name->equals("com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6")) {
			return PrintingProcessor$PrintingElementVisitor$$Lambda$lambda$printPermittedSubclasses$3$6::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"indentation", "I", nullptr, 0, $field(PrintingProcessor$PrintingElementVisitor, indentation)},
		{"writer", "Ljava/io/PrintWriter;", nullptr, $FINAL, $field(PrintingProcessor$PrintingElementVisitor, writer)},
		{"elementUtils", "Ljavax/lang/model/util/Elements;", nullptr, $FINAL, $field(PrintingProcessor$PrintingElementVisitor, elementUtils)},
		{"spaces", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PrintingProcessor$PrintingElementVisitor, spaces)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/Writer;Ljavax/lang/model/util/Elements;)V", nullptr, $PUBLIC, $method(PrintingProcessor$PrintingElementVisitor, init$, void, $Writer*, $Elements*)},
		{"annotationsToString", "(Ljavax/lang/model/element/Element;)Ljava/lang/String;", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, annotationsToString, $String*, $Element*)},
		{"defaultAction", "(Ljavax/lang/model/element/Element;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PROTECTED, $virtualMethod(PrintingProcessor$PrintingElementVisitor, defaultAction, PrintingProcessor$PrintingElementVisitor*, $Element*, $Boolean*)},
		{"defaultAction", "(Ljavax/lang/model/element/Element;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PROTECTED | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, defaultAction, $Object*, $Element*, Object$*)},
		{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, flush, void)},
		{"indent", "()V", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, indent, void)},
		{"lambda$printFormalTypeParameters$2", "(Ljavax/lang/model/element/TypeParameterElement;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(PrintingProcessor$PrintingElementVisitor, lambda$printFormalTypeParameters$2, $String*, $TypeParameterElement*)},
		{"lambda$printPermittedSubclasses$3", "(Ljavax/lang/model/type/TypeMirror;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PrintingProcessor$PrintingElementVisitor, lambda$printPermittedSubclasses$3, $String*, $TypeMirror*)},
		{"lambda$visitType$0", "(Ljavax/lang/model/element/RecordComponentElement;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(PrintingProcessor$PrintingElementVisitor, lambda$visitType$0, $String*, $RecordComponentElement*)},
		{"lambda$visitType$1", "(Ljavax/lang/model/element/Element;)Z", nullptr, $PRIVATE | $SYNTHETIC, $method(PrintingProcessor$PrintingElementVisitor, lambda$visitType$1, bool, $Element*)},
		{"printAnnotations", "(Ljavax/lang/model/element/Element;)V", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, printAnnotations, void, $Element*)},
		{"printDirective", "(Ljavax/lang/model/element/ModuleElement$Directive;)V", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, printDirective, void, $ModuleElement$Directive*)},
		{"printDocComment", "(Ljavax/lang/model/element/Element;)V", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, printDocComment, void, $Element*)},
		{"printFormalTypeParameters", "(Ljavax/lang/model/element/Parameterizable;Z)V", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, printFormalTypeParameters, void, $Parameterizable*, bool)},
		{"printInterfaces", "(Ljavax/lang/model/element/TypeElement;)V", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, printInterfaces, void, $TypeElement*)},
		{"printModifiers", "(Ljavax/lang/model/element/Element;)V", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, printModifiers, void, $Element*)},
		{"printParameters", "(Ljavax/lang/model/element/ExecutableElement;)V", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, printParameters, void, $ExecutableElement*)},
		{"printPermittedSubclasses", "(Ljavax/lang/model/element/TypeElement;)V", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, printPermittedSubclasses, void, $TypeElement*)},
		{"printThrows", "(Ljavax/lang/model/element/ExecutableElement;)V", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, printThrows, void, $ExecutableElement*)},
		{"printedContainerAnnotation", "(Ljavax/lang/model/element/Element;Ljavax/lang/model/element/AnnotationMirror;)Z", nullptr, $PRIVATE, $method(PrintingProcessor$PrintingElementVisitor, printedContainerAnnotation, bool, $Element*, $AnnotationMirror*)},
		{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitExecutable, PrintingProcessor$PrintingElementVisitor*, $ExecutableElement*, $Boolean*)},
		{"visitExecutable", "(Ljavax/lang/model/element/ExecutableElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitExecutable, $Object*, $ExecutableElement*, Object$*)},
		{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitModule, PrintingProcessor$PrintingElementVisitor*, $ModuleElement*, $Boolean*)},
		{"visitModule", "(Ljavax/lang/model/element/ModuleElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitModule, $Object*, $ModuleElement*, Object$*)},
		{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitPackage, PrintingProcessor$PrintingElementVisitor*, $PackageElement*, $Boolean*)},
		{"visitPackage", "(Ljavax/lang/model/element/PackageElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitPackage, $Object*, $PackageElement*, Object$*)},
		{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitRecordComponent, PrintingProcessor$PrintingElementVisitor*, $RecordComponentElement*, $Boolean*)},
		{"visitRecordComponent", "(Ljavax/lang/model/element/RecordComponentElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitRecordComponent, $Object*, $RecordComponentElement*, Object$*)},
		{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitType, PrintingProcessor$PrintingElementVisitor*, $TypeElement*, $Boolean*)},
		{"visitType", "(Ljavax/lang/model/element/TypeElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitType, $Object*, $TypeElement*, Object$*)},
		{"visitTypeParameter", "(Ljavax/lang/model/element/TypeParameterElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitTypeParameter, PrintingProcessor$PrintingElementVisitor*, $TypeParameterElement*, $Boolean*)},
		{"visitTypeParameter", "(Ljavax/lang/model/element/TypeParameterElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitTypeParameter, $Object*, $TypeParameterElement*, Object$*)},
		{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Boolean;)Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitVariable, PrintingProcessor$PrintingElementVisitor*, $VariableElement*, $Boolean*)},
		{"visitVariable", "(Ljavax/lang/model/element/VariableElement;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(PrintingProcessor$PrintingElementVisitor, visitVariable, $Object*, $VariableElement*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "com.sun.tools.javac.processing.PrintingProcessor", "PrintingElementVisitor", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective", "com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "PrintDirective", $PRIVATE | $STATIC},
		{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$2", nullptr, nullptr, 0},
		{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor",
		"javax.lang.model.util.SimpleElementVisitor14",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/lang/model/util/SimpleElementVisitor14<Lcom/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor;Ljava/lang/Boolean;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.processing.PrintingProcessor"
	};
	$loadClass(PrintingProcessor$PrintingElementVisitor, name, initialize, &classInfo$$, PrintingProcessor$PrintingElementVisitor::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor$PrintingElementVisitor);
	});
	return class$;
}

$Class* PrintingProcessor$PrintingElementVisitor::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com