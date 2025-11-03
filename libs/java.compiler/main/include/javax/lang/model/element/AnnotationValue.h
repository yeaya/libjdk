#ifndef _javax_lang_model_element_AnnotationValue_h_
#define _javax_lang_model_element_AnnotationValue_h_
//$ interface javax.lang.model.element.AnnotationValue
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class AnnotationValueVisitor;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $import AnnotationValue : public ::java::lang::Object {
	$interface(AnnotationValue, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* accept(::javax::lang::model::element::AnnotationValueVisitor* v, Object$* p) {return nullptr;}
	virtual $Object* getValue() {return nullptr;}
	virtual $String* toString() override;
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_AnnotationValue_h_