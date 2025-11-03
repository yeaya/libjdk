#ifndef _javax_lang_model_type_WildcardType_h_
#define _javax_lang_model_type_WildcardType_h_
//$ interface javax.lang.model.type.WildcardType
//$ extends javax.lang.model.type.TypeMirror

#include <javax/lang/model/type/TypeMirror.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

class $export WildcardType : public ::javax::lang::model::type::TypeMirror {
	$interface(WildcardType, $NO_CLASS_INIT, ::javax::lang::model::type::TypeMirror)
public:
	virtual ::javax::lang::model::type::TypeMirror* getExtendsBound() {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getSuperBound() {return nullptr;}
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_WildcardType_h_