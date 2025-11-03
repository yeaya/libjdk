#ifndef _javax_lang_model_type_DeclaredType_h_
#define _javax_lang_model_type_DeclaredType_h_
//$ interface javax.lang.model.type.DeclaredType
//$ extends javax.lang.model.type.ReferenceType

#include <javax/lang/model/type/ReferenceType.h>

namespace java {
	namespace util {
		class List;
	}
}
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

class $export DeclaredType : public ::javax::lang::model::type::ReferenceType {
	$interface(DeclaredType, $NO_CLASS_INIT, ::javax::lang::model::type::ReferenceType)
public:
	virtual ::javax::lang::model::element::Element* asElement() {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getEnclosingType() {return nullptr;}
	virtual ::java::util::List* getTypeArguments() {return nullptr;}
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_DeclaredType_h_