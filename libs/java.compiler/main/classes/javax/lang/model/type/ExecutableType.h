#ifndef _javax_lang_model_type_ExecutableType_h_
#define _javax_lang_model_type_ExecutableType_h_
//$ interface javax.lang.model.type.ExecutableType
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

class $export ExecutableType : public ::javax::lang::model::type::TypeMirror {
	$interface(ExecutableType, $NO_CLASS_INIT, ::javax::lang::model::type::TypeMirror)
public:
	virtual ::java::util::List* getParameterTypes() {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getReceiverType() {return nullptr;}
	virtual ::javax::lang::model::type::TypeMirror* getReturnType() {return nullptr;}
	virtual ::java::util::List* getThrownTypes() {return nullptr;}
	virtual ::java::util::List* getTypeVariables() {return nullptr;}
};

			} // type
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_type_ExecutableType_h_