#ifndef _javax_annotation_processing_Messager_h_
#define _javax_annotation_processing_Messager_h_
//$ interface javax.annotation.processing.Messager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationMirror;
				class AnnotationValue;
				class Element;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class Diagnostic$Kind;
	}
}

namespace javax {
	namespace annotation {
		namespace processing {

class $import Messager : public ::java::lang::Object {
	$interface(Messager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg) {}
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::javax::lang::model::element::Element* e) {}
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a) {}
	virtual void printMessage(::javax::tools::Diagnostic$Kind* kind, ::java::lang::CharSequence* msg, ::javax::lang::model::element::Element* e, ::javax::lang::model::element::AnnotationMirror* a, ::javax::lang::model::element::AnnotationValue* v) {}
};

		} // processing
	} // annotation
} // javax

#endif // _javax_annotation_processing_Messager_h_