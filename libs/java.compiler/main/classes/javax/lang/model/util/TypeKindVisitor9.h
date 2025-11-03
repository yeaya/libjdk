#ifndef _javax_lang_model_util_TypeKindVisitor9_h_
#define _javax_lang_model_util_TypeKindVisitor9_h_
//$ class javax.lang.model.util.TypeKindVisitor9
//$ extends javax.lang.model.util.TypeKindVisitor8

#include <javax/lang/model/util/TypeKindVisitor8.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class NoType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export TypeKindVisitor9 : public ::javax::lang::model::util::TypeKindVisitor8 {
	$class(TypeKindVisitor9, $NO_CLASS_INIT, ::javax::lang::model::util::TypeKindVisitor8)
public:
	TypeKindVisitor9();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitNoTypeAsModule(::javax::lang::model::type::NoType* t, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_TypeKindVisitor9_h_