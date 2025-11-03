#ifndef _javax_lang_model_type_IntersectionType_h_
#define _javax_lang_model_type_IntersectionType_h_
//$ interface javax.lang.model.type.IntersectionType
//$ extends javax.lang.model.type.TypeMirror

#include <javax/lang/model/type/TypeMirror.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace type {

class $export IntersectionType : public ::javax::lang::model::type::TypeMirror {
	$interface(IntersectionType, $NO_CLASS_INIT, ::javax::lang::model::type::TypeMirror)
public:
	virtual ::java::util::List* getBounds() {return nullptr;}
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_IntersectionType_h_