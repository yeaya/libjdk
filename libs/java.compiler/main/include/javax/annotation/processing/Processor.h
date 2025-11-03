#ifndef _javax_annotation_processing_Processor_h_
#define _javax_annotation_processing_Processor_h_
//$ interface javax.annotation.processing.Processor
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			class RoundEnvironment;
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

class $import Processor : public ::java::lang::Object {
	$interface(Processor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::lang::Iterable* getCompletions(::javax::lang::model::element::Element* element, ::javax::lang::model::element::AnnotationMirror* annotation, ::javax::lang::model::element::ExecutableElement* member, $String* userText) {return nullptr;}
	virtual ::java::util::Set* getSupportedAnnotationTypes() {return nullptr;}
	virtual ::java::util::Set* getSupportedOptions() {return nullptr;}
	virtual ::javax::lang::model::SourceVersion* getSupportedSourceVersion() {return nullptr;}
	virtual void init(::javax::annotation::processing::ProcessingEnvironment* processingEnv) {}
	virtual bool process(::java::util::Set* annotations, ::javax::annotation::processing::RoundEnvironment* roundEnv) {return false;}
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_Processor_h_