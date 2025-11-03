#ifndef _javax_annotation_processing_AbstractProcessor_h_
#define _javax_annotation_processing_AbstractProcessor_h_
//$ class javax.annotation.processing.AbstractProcessor
//$ extends javax.annotation.processing.Processor

#include <java/lang/Array.h>
#include <javax/annotation/processing/Processor.h>

namespace java {
	namespace lang {
		class Iterable;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace annotation {
		namespace processing {
			class ProcessingEnvironment;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			class SourceVersion;
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationMirror;
				class Element;
				class ExecutableElement;
			}
		}
	}
}

namespace javax {
	namespace annotation {
		namespace processing {

class $export AbstractProcessor : public ::javax::annotation::processing::Processor {
	$class(AbstractProcessor, 0, ::javax::annotation::processing::Processor)
public:
	AbstractProcessor();
	void init$();
	::java::util::Set* arrayToSet($StringArray* array, bool stripModulePrefixes, $String* contentType, $String* annotationName);
	virtual ::java::lang::Iterable* getCompletions(::javax::lang::model::element::Element* element, ::javax::lang::model::element::AnnotationMirror* annotation, ::javax::lang::model::element::ExecutableElement* member, $String* userText) override;
	virtual ::java::util::Set* getSupportedAnnotationTypes() override;
	virtual ::java::util::Set* getSupportedOptions() override;
	virtual ::javax::lang::model::SourceVersion* getSupportedSourceVersion() override;
	virtual void init(::javax::annotation::processing::ProcessingEnvironment* processingEnv) override;
	virtual bool isInitialized();
	virtual bool process(::java::util::Set* annotations, ::javax::annotation::processing::RoundEnvironment* roundEnv) override {return false;}
	static bool $assertionsDisabled;
	::javax::annotation::processing::ProcessingEnvironment* processingEnv = nullptr;
	bool initialized = false;
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_AbstractProcessor_h_