#include <com/sun/tools/javac/processing/PrintingProcessor.h>
#include <com/sun/tools/javac/processing/PrintingProcessor$PrintingElementVisitor.h>
#include <java/io/OutputStream.h>
#include <java/io/PrintWriter.h>
#include <java/io/Writer.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/annotation/processing/AbstractProcessor.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/annotation/processing/RoundEnvironment.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <javax/lang/model/util/Elements.h>
#include <jcpp.h>

using $PrintingProcessor$PrintingElementVisitor = ::com::sun::tools::javac::processing::PrintingProcessor$PrintingElementVisitor;
using $PrintWriter = ::java::io::PrintWriter;
using $Writer = ::java::io::Writer;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $AbstractProcessor = ::javax::annotation::processing::AbstractProcessor;
using $RoundEnvironment = ::javax::annotation::processing::RoundEnvironment;
using $Element = ::javax::lang::model::element::Element;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace processing {

void PrintingProcessor::init$() {
	$AbstractProcessor::init$();
	$set(this, writer, $new($PrintWriter, $System::out));
}

void PrintingProcessor::setWriter($Writer* w) {
	$set(this, writer, $new($PrintWriter, w));
}

bool PrintingProcessor::process($Set* tes, $RoundEnvironment* renv) {
	$useLocalObjectStack();
	$var($Iterator, i$, $$nc($nc(renv)->getRootElements())->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Element, element, $cast($Element, i$->next()));
		{
			print(element);
		}
	}
	return true;
}

void PrintingProcessor::print($Element* element) {
	$useLocalObjectStack();
	$$sure($PrintingProcessor$PrintingElementVisitor, $$new($PrintingProcessor$PrintingElementVisitor, this->writer, $($nc(this->processingEnv)->getElementUtils()))->visit(element))->flush();
}

PrintingProcessor::PrintingProcessor() {
}

$Class* PrintingProcessor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"writer", "Ljava/io/PrintWriter;", nullptr, 0, $field(PrintingProcessor, writer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PrintingProcessor, init$, void)},
		{"print", "(Ljavax/lang/model/element/Element;)V", nullptr, 0, $virtualMethod(PrintingProcessor, print, void, $Element*)},
		{"process", "(Ljava/util/Set;Ljavax/annotation/processing/RoundEnvironment;)Z", "(Ljava/util/Set<+Ljavax/lang/model/element/TypeElement;>;Ljavax/annotation/processing/RoundEnvironment;)Z", $PUBLIC, $virtualMethod(PrintingProcessor, process, bool, $Set*, $RoundEnvironment*)},
		{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(PrintingProcessor, setWriter, void, $Writer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.processing.PrintingProcessor$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor", "com.sun.tools.javac.processing.PrintingProcessor", "PrintingElementVisitor", $PUBLIC | $STATIC},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "*"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute$1[] = {
		{"value", 'e', "Ljavax/lang/model/SourceVersion; RELEASE_17"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljavax/annotation/processing/SupportedAnnotationTypes;", annotations$$$namedAttribute},
		{"Ljavax/annotation/processing/SupportedSourceVersion;", annotations$$$namedAttribute$1},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.processing.PrintingProcessor",
		"javax.annotation.processing.AbstractProcessor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"com.sun.tools.javac.processing.PrintingProcessor$1,com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor,com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$PrintDirective,com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$2,com.sun.tools.javac.processing.PrintingProcessor$PrintingElementVisitor$1"
	};
	$loadClass(PrintingProcessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrintingProcessor);
	});
	return class$;
}

$Class* PrintingProcessor::class$ = nullptr;

				} // processing
			} // javac
		} // tools
	} // sun
} // com