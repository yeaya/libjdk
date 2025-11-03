#ifndef _javax_lang_model_type_TypeVariable_h_
#define _javax_lang_model_type_TypeVariable_h_
//$ interface javax.lang.model.type.TypeVariable
//$ extends javax.lang.model.type.ReferenceType

#include <javax/lang/model/type/ReferenceType.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
			}
		}
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class TypeMirror;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

class $export TypeVariable : public ::javax::lang::model::type::ReferenceType {
	$interface(TypeVariable, $NO_CLASS_INIT, ::javax::lang::model::type::ReferenceType)
public:
	virtual ::javax::lang::model::element::Element* asElement() {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getLowerBound() {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getUpperBound() {return nullptr;}
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_TypeVariable_h_