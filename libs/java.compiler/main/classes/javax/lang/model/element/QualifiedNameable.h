#ifndef _javax_lang_model_element_QualifiedNameable_h_
#define _javax_lang_model_element_QualifiedNameable_h_
//$ interface javax.lang.model.element.QualifiedNameable
//$ extends javax.lang.model.element.Element

#include <javax/lang/model/element/Element.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Name;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace element {

class $export QualifiedNameable : public ::javax::lang::model::element::Element {
	$interface(QualifiedNameable, $NO_CLASS_INIT, ::javax::lang::model::element::Element)
public:
	virtual ::javax::lang::model::element::Name* getQualifiedName() {return nullptr;}
};

			} // element
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_element_QualifiedNameable_h_