#ifndef _javax_lang_model_type_ArrayType_h_
#define _javax_lang_model_type_ArrayType_h_
//$ interface javax.lang.model.type.ArrayType
//$ extends javax.lang.model.type.ReferenceType

#include <javax/lang/model/type/ReferenceType.h>

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

class $import ArrayType : public ::javax::lang::model::type::ReferenceType {
	$interface(ArrayType, $NO_CLASS_INIT, ::javax::lang::model::type::ReferenceType)
public:
	virtual ::javax::lang::model::type::TypeMirror* getComponentType() {return nullptr;}
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_ArrayType_h_