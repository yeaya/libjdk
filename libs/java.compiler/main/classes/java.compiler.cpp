#include <java.compiler.h>

#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <javax/annotation/processing/AbstractProcessor.h>
#include <javax/annotation/processing/Completion.h>
#include <javax/annotation/processing/Completions.h>
#include <javax/annotation/processing/Completions$SimpleCompletion.h>
#include <javax/annotation/processing/Filer.h>
#include <javax/annotation/processing/FilerException.h>
#include <javax/annotation/processing/Generated.h>
#include <javax/annotation/processing/Messager.h>
#include <javax/annotation/processing/ProcessingEnvironment.h>
#include <javax/annotation/processing/Processor.h>
#include <javax/annotation/processing/RoundEnvironment.h>
#include <javax/annotation/processing/SupportedAnnotationTypes.h>
#include <javax/annotation/processing/SupportedOptions.h>
#include <javax/annotation/processing/SupportedSourceVersion.h>
#include <javax/lang/model/AnnotatedConstruct.h>
#include <javax/lang/model/SourceVersion.h>
#include <javax/lang/model/UnknownEntityException.h>
#include <javax/lang/model/element/AnnotationMirror.h>
#include <javax/lang/model/element/AnnotationValue.h>
#include <javax/lang/model/element/AnnotationValueVisitor.h>
#include <javax/lang/model/element/Element.h>
#include <javax/lang/model/element/ElementKind.h>
#include <javax/lang/model/element/ElementVisitor.h>
#include <javax/lang/model/element/ExecutableElement.h>
#include <javax/lang/model/element/Modifier.h>
#include <javax/lang/model/element/Modifier$1.h>
#include <javax/lang/model/element/ModuleElement.h>
#include <javax/lang/model/element/ModuleElement$Directive.h>
#include <javax/lang/model/element/ModuleElement$DirectiveKind.h>
#include <javax/lang/model/element/ModuleElement$DirectiveVisitor.h>
#include <javax/lang/model/element/ModuleElement$ExportsDirective.h>
#include <javax/lang/model/element/ModuleElement$OpensDirective.h>
#include <javax/lang/model/element/ModuleElement$ProvidesDirective.h>
#include <javax/lang/model/element/ModuleElement$RequiresDirective.h>
#include <javax/lang/model/element/ModuleElement$UsesDirective.h>
#include <javax/lang/model/element/Name.h>
#include <javax/lang/model/element/NestingKind.h>
#include <javax/lang/model/element/PackageElement.h>
#include <javax/lang/model/element/Parameterizable.h>
#include <javax/lang/model/element/QualifiedNameable.h>
#include <javax/lang/model/element/RecordComponentElement.h>
#include <javax/lang/model/element/TypeElement.h>
#include <javax/lang/model/element/TypeParameterElement.h>
#include <javax/lang/model/element/UnknownAnnotationValueException.h>
#include <javax/lang/model/element/UnknownDirectiveException.h>
#include <javax/lang/model/element/UnknownElementException.h>
#include <javax/lang/model/element/VariableElement.h>
#include <javax/lang/model/type/ArrayType.h>
#include <javax/lang/model/type/DeclaredType.h>
#include <javax/lang/model/type/ErrorType.h>
#include <javax/lang/model/type/ExecutableType.h>
#include <javax/lang/model/type/IntersectionType.h>
#include <javax/lang/model/type/MirroredTypeException.h>
#include <javax/lang/model/type/MirroredTypesException.h>
#include <javax/lang/model/type/NoType.h>
#include <javax/lang/model/type/NullType.h>
#include <javax/lang/model/type/PrimitiveType.h>
#include <javax/lang/model/type/ReferenceType.h>
#include <javax/lang/model/type/TypeKind.h>
#include <javax/lang/model/type/TypeKind$1.h>
#include <javax/lang/model/type/TypeMirror.h>
#include <javax/lang/model/type/TypeVariable.h>
#include <javax/lang/model/type/TypeVisitor.h>
#include <javax/lang/model/type/UnionType.h>
#include <javax/lang/model/type/UnknownTypeException.h>
#include <javax/lang/model/type/WildcardType.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor14.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor6.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor7.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor8.h>
#include <javax/lang/model/util/AbstractAnnotationValueVisitor9.h>
#include <javax/lang/model/util/AbstractElementVisitor14.h>
#include <javax/lang/model/util/AbstractElementVisitor6.h>
#include <javax/lang/model/util/AbstractElementVisitor7.h>
#include <javax/lang/model/util/AbstractElementVisitor8.h>
#include <javax/lang/model/util/AbstractElementVisitor9.h>
#include <javax/lang/model/util/AbstractTypeVisitor14.h>
#include <javax/lang/model/util/AbstractTypeVisitor6.h>
#include <javax/lang/model/util/AbstractTypeVisitor7.h>
#include <javax/lang/model/util/AbstractTypeVisitor8.h>
#include <javax/lang/model/util/AbstractTypeVisitor9.h>
#include <javax/lang/model/util/ElementFilter.h>
#include <javax/lang/model/util/ElementKindVisitor14.h>
#include <javax/lang/model/util/ElementKindVisitor6.h>
#include <javax/lang/model/util/ElementKindVisitor6$1.h>
#include <javax/lang/model/util/ElementKindVisitor7.h>
#include <javax/lang/model/util/ElementKindVisitor8.h>
#include <javax/lang/model/util/ElementKindVisitor9.h>
#include <javax/lang/model/util/ElementScanner14.h>
#include <javax/lang/model/util/ElementScanner6.h>
#include <javax/lang/model/util/ElementScanner7.h>
#include <javax/lang/model/util/ElementScanner8.h>
#include <javax/lang/model/util/ElementScanner9.h>
#include <javax/lang/model/util/Elements.h>
#include <javax/lang/model/util/Elements$Origin.h>
#include <javax/lang/model/util/SimpleAnnotationValueVisitor14.h>
#include <javax/lang/model/util/SimpleAnnotationValueVisitor6.h>
#include <javax/lang/model/util/SimpleAnnotationValueVisitor7.h>
#include <javax/lang/model/util/SimpleAnnotationValueVisitor8.h>
#include <javax/lang/model/util/SimpleAnnotationValueVisitor9.h>
#include <javax/lang/model/util/SimpleElementVisitor14.h>
#include <javax/lang/model/util/SimpleElementVisitor6.h>
#include <javax/lang/model/util/SimpleElementVisitor7.h>
#include <javax/lang/model/util/SimpleElementVisitor8.h>
#include <javax/lang/model/util/SimpleElementVisitor9.h>
#include <javax/lang/model/util/SimpleTypeVisitor14.h>
#include <javax/lang/model/util/SimpleTypeVisitor6.h>
#include <javax/lang/model/util/SimpleTypeVisitor7.h>
#include <javax/lang/model/util/SimpleTypeVisitor8.h>
#include <javax/lang/model/util/SimpleTypeVisitor9.h>
#include <javax/lang/model/util/TypeKindVisitor14.h>
#include <javax/lang/model/util/TypeKindVisitor6.h>
#include <javax/lang/model/util/TypeKindVisitor6$1.h>
#include <javax/lang/model/util/TypeKindVisitor7.h>
#include <javax/lang/model/util/TypeKindVisitor8.h>
#include <javax/lang/model/util/TypeKindVisitor9.h>
#include <javax/lang/model/util/Types.h>
#include <javax/tools/Diagnostic.h>
#include <javax/tools/Diagnostic$Kind.h>
#include <javax/tools/DiagnosticCollector.h>
#include <javax/tools/DiagnosticListener.h>
#include <javax/tools/DocumentationTool.h>
#include <javax/tools/DocumentationTool$1.h>
#include <javax/tools/DocumentationTool$DocumentationTask.h>
#include <javax/tools/DocumentationTool$Location.h>
#include <javax/tools/FileObject.h>
#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/ForwardingJavaFileManager.h>
#include <javax/tools/ForwardingJavaFileObject.h>
#include <javax/tools/JavaCompiler.h>
#include <javax/tools/JavaCompiler$CompilationTask.h>
#include <javax/tools/JavaFileManager.h>
#include <javax/tools/JavaFileManager$Location.h>
#include <javax/tools/JavaFileObject.h>
#include <javax/tools/JavaFileObject$Kind.h>
#include <javax/tools/OptionChecker.h>
#include <javax/tools/SimpleJavaFileObject.h>
#include <javax/tools/StandardJavaFileManager.h>
#include <javax/tools/StandardJavaFileManager$1.h>
#include <javax/tools/StandardJavaFileManager$2.h>
#include <javax/tools/StandardJavaFileManager$PathFactory.h>
#include <javax/tools/StandardLocation.h>
#include <javax/tools/StandardLocation$1.h>
#include <javax/tools/StandardLocation$2.h>
#include <javax/tools/Tool.h>
#include <javax/tools/ToolProvider.h>

#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _java$compiler_classes_[] = {
	$classEntry("javax.annotation.processing.AbstractProcessor", ::javax::annotation::processing::AbstractProcessor),
	$classEntry("javax.annotation.processing.Completion", ::javax::annotation::processing::Completion),
	$classEntry("javax.annotation.processing.Completions", ::javax::annotation::processing::Completions),
	$classEntry("javax.annotation.processing.Completions$SimpleCompletion", ::javax::annotation::processing::Completions$SimpleCompletion),
	$classEntry("javax.annotation.processing.Filer", ::javax::annotation::processing::Filer),
	$classEntry("javax.annotation.processing.FilerException", ::javax::annotation::processing::FilerException),
	$classEntry("javax.annotation.processing.Generated", ::javax::annotation::processing::Generated),
	$classEntry("javax.annotation.processing.Messager", ::javax::annotation::processing::Messager),
	$classEntry("javax.annotation.processing.ProcessingEnvironment", ::javax::annotation::processing::ProcessingEnvironment),
	$classEntry("javax.annotation.processing.Processor", ::javax::annotation::processing::Processor),
	$classEntry("javax.annotation.processing.RoundEnvironment", ::javax::annotation::processing::RoundEnvironment),
	$classEntry("javax.annotation.processing.SupportedAnnotationTypes", ::javax::annotation::processing::SupportedAnnotationTypes),
	$classEntry("javax.annotation.processing.SupportedOptions", ::javax::annotation::processing::SupportedOptions),
	$classEntry("javax.annotation.processing.SupportedSourceVersion", ::javax::annotation::processing::SupportedSourceVersion),
	$classEntry("javax.lang.model.AnnotatedConstruct", ::javax::lang::model::AnnotatedConstruct),
	$classEntry("javax.lang.model.SourceVersion", ::javax::lang::model::SourceVersion),
	$classEntry("javax.lang.model.UnknownEntityException", ::javax::lang::model::UnknownEntityException),
	$classEntry("javax.lang.model.element.AnnotationMirror", ::javax::lang::model::element::AnnotationMirror),
	$classEntry("javax.lang.model.element.AnnotationValue", ::javax::lang::model::element::AnnotationValue),
	$classEntry("javax.lang.model.element.AnnotationValueVisitor", ::javax::lang::model::element::AnnotationValueVisitor),
	$classEntry("javax.lang.model.element.Element", ::javax::lang::model::element::Element),
	$classEntry("javax.lang.model.element.ElementKind", ::javax::lang::model::element::ElementKind),
	$classEntry("javax.lang.model.element.ElementVisitor", ::javax::lang::model::element::ElementVisitor),
	$classEntry("javax.lang.model.element.ExecutableElement", ::javax::lang::model::element::ExecutableElement),
	$classEntry("javax.lang.model.element.Modifier", ::javax::lang::model::element::Modifier),
	$classEntry("javax.lang.model.element.Modifier$1", ::javax::lang::model::element::Modifier$1),
	$classEntry("javax.lang.model.element.ModuleElement", ::javax::lang::model::element::ModuleElement),
	$classEntry("javax.lang.model.element.ModuleElement$Directive", ::javax::lang::model::element::ModuleElement$Directive),
	$classEntry("javax.lang.model.element.ModuleElement$DirectiveKind", ::javax::lang::model::element::ModuleElement$DirectiveKind),
	$classEntry("javax.lang.model.element.ModuleElement$DirectiveVisitor", ::javax::lang::model::element::ModuleElement$DirectiveVisitor),
	$classEntry("javax.lang.model.element.ModuleElement$ExportsDirective", ::javax::lang::model::element::ModuleElement$ExportsDirective),
	$classEntry("javax.lang.model.element.ModuleElement$OpensDirective", ::javax::lang::model::element::ModuleElement$OpensDirective),
	$classEntry("javax.lang.model.element.ModuleElement$ProvidesDirective", ::javax::lang::model::element::ModuleElement$ProvidesDirective),
	$classEntry("javax.lang.model.element.ModuleElement$RequiresDirective", ::javax::lang::model::element::ModuleElement$RequiresDirective),
	$classEntry("javax.lang.model.element.ModuleElement$UsesDirective", ::javax::lang::model::element::ModuleElement$UsesDirective),
	$classEntry("javax.lang.model.element.Name", ::javax::lang::model::element::Name),
	$classEntry("javax.lang.model.element.NestingKind", ::javax::lang::model::element::NestingKind),
	$classEntry("javax.lang.model.element.PackageElement", ::javax::lang::model::element::PackageElement),
	$classEntry("javax.lang.model.element.Parameterizable", ::javax::lang::model::element::Parameterizable),
	$classEntry("javax.lang.model.element.QualifiedNameable", ::javax::lang::model::element::QualifiedNameable),
	$classEntry("javax.lang.model.element.RecordComponentElement", ::javax::lang::model::element::RecordComponentElement),
	$classEntry("javax.lang.model.element.TypeElement", ::javax::lang::model::element::TypeElement),
	$classEntry("javax.lang.model.element.TypeParameterElement", ::javax::lang::model::element::TypeParameterElement),
	$classEntry("javax.lang.model.element.UnknownAnnotationValueException", ::javax::lang::model::element::UnknownAnnotationValueException),
	$classEntry("javax.lang.model.element.UnknownDirectiveException", ::javax::lang::model::element::UnknownDirectiveException),
	$classEntry("javax.lang.model.element.UnknownElementException", ::javax::lang::model::element::UnknownElementException),
	$classEntry("javax.lang.model.element.VariableElement", ::javax::lang::model::element::VariableElement),
	$classEntry("javax.lang.model.type.ArrayType", ::javax::lang::model::type::ArrayType),
	$classEntry("javax.lang.model.type.DeclaredType", ::javax::lang::model::type::DeclaredType),
	$classEntry("javax.lang.model.type.ErrorType", ::javax::lang::model::type::ErrorType),
	$classEntry("javax.lang.model.type.ExecutableType", ::javax::lang::model::type::ExecutableType),
	$classEntry("javax.lang.model.type.IntersectionType", ::javax::lang::model::type::IntersectionType),
	$classEntry("javax.lang.model.type.MirroredTypeException", ::javax::lang::model::type::MirroredTypeException),
	$classEntry("javax.lang.model.type.MirroredTypesException", ::javax::lang::model::type::MirroredTypesException),
	$classEntry("javax.lang.model.type.NoType", ::javax::lang::model::type::NoType),
	$classEntry("javax.lang.model.type.NullType", ::javax::lang::model::type::NullType),
	$classEntry("javax.lang.model.type.PrimitiveType", ::javax::lang::model::type::PrimitiveType),
	$classEntry("javax.lang.model.type.ReferenceType", ::javax::lang::model::type::ReferenceType),
	$classEntry("javax.lang.model.type.TypeKind", ::javax::lang::model::type::TypeKind),
	$classEntry("javax.lang.model.type.TypeKind$1", ::javax::lang::model::type::TypeKind$1),
	$classEntry("javax.lang.model.type.TypeMirror", ::javax::lang::model::type::TypeMirror),
	$classEntry("javax.lang.model.type.TypeVariable", ::javax::lang::model::type::TypeVariable),
	$classEntry("javax.lang.model.type.TypeVisitor", ::javax::lang::model::type::TypeVisitor),
	$classEntry("javax.lang.model.type.UnionType", ::javax::lang::model::type::UnionType),
	$classEntry("javax.lang.model.type.UnknownTypeException", ::javax::lang::model::type::UnknownTypeException),
	$classEntry("javax.lang.model.type.WildcardType", ::javax::lang::model::type::WildcardType),
	$classEntry("javax.lang.model.util.AbstractAnnotationValueVisitor14", ::javax::lang::model::util::AbstractAnnotationValueVisitor14),
	$classEntry("javax.lang.model.util.AbstractAnnotationValueVisitor6", ::javax::lang::model::util::AbstractAnnotationValueVisitor6),
	$classEntry("javax.lang.model.util.AbstractAnnotationValueVisitor7", ::javax::lang::model::util::AbstractAnnotationValueVisitor7),
	$classEntry("javax.lang.model.util.AbstractAnnotationValueVisitor8", ::javax::lang::model::util::AbstractAnnotationValueVisitor8),
	$classEntry("javax.lang.model.util.AbstractAnnotationValueVisitor9", ::javax::lang::model::util::AbstractAnnotationValueVisitor9),
	$classEntry("javax.lang.model.util.AbstractElementVisitor14", ::javax::lang::model::util::AbstractElementVisitor14),
	$classEntry("javax.lang.model.util.AbstractElementVisitor6", ::javax::lang::model::util::AbstractElementVisitor6),
	$classEntry("javax.lang.model.util.AbstractElementVisitor7", ::javax::lang::model::util::AbstractElementVisitor7),
	$classEntry("javax.lang.model.util.AbstractElementVisitor8", ::javax::lang::model::util::AbstractElementVisitor8),
	$classEntry("javax.lang.model.util.AbstractElementVisitor9", ::javax::lang::model::util::AbstractElementVisitor9),
	$classEntry("javax.lang.model.util.AbstractTypeVisitor14", ::javax::lang::model::util::AbstractTypeVisitor14),
	$classEntry("javax.lang.model.util.AbstractTypeVisitor6", ::javax::lang::model::util::AbstractTypeVisitor6),
	$classEntry("javax.lang.model.util.AbstractTypeVisitor7", ::javax::lang::model::util::AbstractTypeVisitor7),
	$classEntry("javax.lang.model.util.AbstractTypeVisitor8", ::javax::lang::model::util::AbstractTypeVisitor8),
	$classEntry("javax.lang.model.util.AbstractTypeVisitor9", ::javax::lang::model::util::AbstractTypeVisitor9),
	$classEntry("javax.lang.model.util.ElementFilter", ::javax::lang::model::util::ElementFilter),
	$classEntry("javax.lang.model.util.ElementKindVisitor14", ::javax::lang::model::util::ElementKindVisitor14),
	$classEntry("javax.lang.model.util.ElementKindVisitor6", ::javax::lang::model::util::ElementKindVisitor6),
	$classEntry("javax.lang.model.util.ElementKindVisitor6$1", ::javax::lang::model::util::ElementKindVisitor6$1),
	$classEntry("javax.lang.model.util.ElementKindVisitor7", ::javax::lang::model::util::ElementKindVisitor7),
	$classEntry("javax.lang.model.util.ElementKindVisitor8", ::javax::lang::model::util::ElementKindVisitor8),
	$classEntry("javax.lang.model.util.ElementKindVisitor9", ::javax::lang::model::util::ElementKindVisitor9),
	$classEntry("javax.lang.model.util.ElementScanner14", ::javax::lang::model::util::ElementScanner14),
	$classEntry("javax.lang.model.util.ElementScanner6", ::javax::lang::model::util::ElementScanner6),
	$classEntry("javax.lang.model.util.ElementScanner7", ::javax::lang::model::util::ElementScanner7),
	$classEntry("javax.lang.model.util.ElementScanner8", ::javax::lang::model::util::ElementScanner8),
	$classEntry("javax.lang.model.util.ElementScanner9", ::javax::lang::model::util::ElementScanner9),
	$classEntry("javax.lang.model.util.Elements", ::javax::lang::model::util::Elements),
	$classEntry("javax.lang.model.util.Elements$Origin", ::javax::lang::model::util::Elements$Origin),
	$classEntry("javax.lang.model.util.SimpleAnnotationValueVisitor14", ::javax::lang::model::util::SimpleAnnotationValueVisitor14),
	$classEntry("javax.lang.model.util.SimpleAnnotationValueVisitor6", ::javax::lang::model::util::SimpleAnnotationValueVisitor6),
	$classEntry("javax.lang.model.util.SimpleAnnotationValueVisitor7", ::javax::lang::model::util::SimpleAnnotationValueVisitor7),
	$classEntry("javax.lang.model.util.SimpleAnnotationValueVisitor8", ::javax::lang::model::util::SimpleAnnotationValueVisitor8),
	$classEntry("javax.lang.model.util.SimpleAnnotationValueVisitor9", ::javax::lang::model::util::SimpleAnnotationValueVisitor9),
	$classEntry("javax.lang.model.util.SimpleElementVisitor14", ::javax::lang::model::util::SimpleElementVisitor14),
	$classEntry("javax.lang.model.util.SimpleElementVisitor6", ::javax::lang::model::util::SimpleElementVisitor6),
	$classEntry("javax.lang.model.util.SimpleElementVisitor7", ::javax::lang::model::util::SimpleElementVisitor7),
	$classEntry("javax.lang.model.util.SimpleElementVisitor8", ::javax::lang::model::util::SimpleElementVisitor8),
	$classEntry("javax.lang.model.util.SimpleElementVisitor9", ::javax::lang::model::util::SimpleElementVisitor9),
	$classEntry("javax.lang.model.util.SimpleTypeVisitor14", ::javax::lang::model::util::SimpleTypeVisitor14),
	$classEntry("javax.lang.model.util.SimpleTypeVisitor6", ::javax::lang::model::util::SimpleTypeVisitor6),
	$classEntry("javax.lang.model.util.SimpleTypeVisitor7", ::javax::lang::model::util::SimpleTypeVisitor7),
	$classEntry("javax.lang.model.util.SimpleTypeVisitor8", ::javax::lang::model::util::SimpleTypeVisitor8),
	$classEntry("javax.lang.model.util.SimpleTypeVisitor9", ::javax::lang::model::util::SimpleTypeVisitor9),
	$classEntry("javax.lang.model.util.TypeKindVisitor14", ::javax::lang::model::util::TypeKindVisitor14),
	$classEntry("javax.lang.model.util.TypeKindVisitor6", ::javax::lang::model::util::TypeKindVisitor6),
	$classEntry("javax.lang.model.util.TypeKindVisitor6$1", ::javax::lang::model::util::TypeKindVisitor6$1),
	$classEntry("javax.lang.model.util.TypeKindVisitor7", ::javax::lang::model::util::TypeKindVisitor7),
	$classEntry("javax.lang.model.util.TypeKindVisitor8", ::javax::lang::model::util::TypeKindVisitor8),
	$classEntry("javax.lang.model.util.TypeKindVisitor9", ::javax::lang::model::util::TypeKindVisitor9),
	$classEntry("javax.lang.model.util.Types", ::javax::lang::model::util::Types),
	$classEntry("javax.tools.Diagnostic", ::javax::tools::Diagnostic),
	$classEntry("javax.tools.Diagnostic$Kind", ::javax::tools::Diagnostic$Kind),
	$classEntry("javax.tools.DiagnosticCollector", ::javax::tools::DiagnosticCollector),
	$classEntry("javax.tools.DiagnosticListener", ::javax::tools::DiagnosticListener),
	$classEntry("javax.tools.DocumentationTool", ::javax::tools::DocumentationTool),
	$classEntry("javax.tools.DocumentationTool$1", ::javax::tools::DocumentationTool$1),
	$classEntry("javax.tools.DocumentationTool$DocumentationTask", ::javax::tools::DocumentationTool$DocumentationTask),
	$classEntry("javax.tools.DocumentationTool$Location", ::javax::tools::DocumentationTool$Location),
	$classEntry("javax.tools.FileObject", ::javax::tools::FileObject),
	$classEntry("javax.tools.ForwardingFileObject", ::javax::tools::ForwardingFileObject),
	$classEntry("javax.tools.ForwardingJavaFileManager", ::javax::tools::ForwardingJavaFileManager),
	$classEntry("javax.tools.ForwardingJavaFileObject", ::javax::tools::ForwardingJavaFileObject),
	$classEntry("javax.tools.JavaCompiler", ::javax::tools::JavaCompiler),
	$classEntry("javax.tools.JavaCompiler$CompilationTask", ::javax::tools::JavaCompiler$CompilationTask),
	$classEntry("javax.tools.JavaFileManager", ::javax::tools::JavaFileManager),
	$classEntry("javax.tools.JavaFileManager$Location", ::javax::tools::JavaFileManager$Location),
	$classEntry("javax.tools.JavaFileObject", ::javax::tools::JavaFileObject),
	$classEntry("javax.tools.JavaFileObject$Kind", ::javax::tools::JavaFileObject$Kind),
	$classEntry("javax.tools.OptionChecker", ::javax::tools::OptionChecker),
	$classEntry("javax.tools.SimpleJavaFileObject", ::javax::tools::SimpleJavaFileObject),
	$classEntry("javax.tools.StandardJavaFileManager", ::javax::tools::StandardJavaFileManager),
	$classEntry("javax.tools.StandardJavaFileManager$1", ::javax::tools::StandardJavaFileManager$1),
	$classEntry("javax.tools.StandardJavaFileManager$2", ::javax::tools::StandardJavaFileManager$2),
	$classEntry("javax.tools.StandardJavaFileManager$PathFactory", ::javax::tools::StandardJavaFileManager$PathFactory),
	$classEntry("javax.tools.StandardLocation", ::javax::tools::StandardLocation),
	$classEntry("javax.tools.StandardLocation$1", ::javax::tools::StandardLocation$1),
	$classEntry("javax.tools.StandardLocation$2", ::javax::tools::StandardLocation$2),
	$classEntry("javax.tools.Tool", ::javax::tools::Tool),
	$classEntry("javax.tools.ToolProvider", ::javax::tools::ToolProvider)
};

const char* _java$compiler_packages_[] = {
	"javax.annotation.processing",
	"javax.lang.model",
	"javax.lang.model.element",
	"javax.lang.model.type",
	"javax.lang.model.util",
	"javax.tools"
};

void java$compiler$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_java$compiler_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_java$compiler_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void java$compiler$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$compiler$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$compiler$GetPackages() {
	int32_t length = $lengthOf(_java$compiler_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_java$compiler_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* java$compiler$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_java$compiler_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_java$compiler_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* java$compiler$GetResource($String* name) {
	return nullptr;
}

void java$compiler::init() {
	::java$base::init();
	::java::lang::Library lib = {
		"java.compiler", "17.35", "",
		&_java$compiler_ModuleInfo_,
		java$compiler$LibEventAction,
		java$compiler$GetPackages,
		java$compiler$GetClassEntry,
		java$compiler$GetResource
	};
	$System::addLibrary(&lib);
}