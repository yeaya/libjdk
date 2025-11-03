#ifndef _javax_lang_model_util_TypeKindVisitor7_h_
#define _javax_lang_model_util_TypeKindVisitor7_h_
//$ class javax.lang.model.util.TypeKindVisitor7
//$ extends javax.lang.model.util.TypeKindVisitor6

#include <javax/lang/model/util/TypeKindVisitor6.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class UnionType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import TypeKindVisitor7 : public ::javax::lang::model::util::TypeKindVisitor6 {
	$class(TypeKindVisitor7, $NO_CLASS_INIT, ::javax::lang::model::util::TypeKindVisitor6)
public:
	TypeKindVisitor7();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitUnion(::javax::lang::model::type::UnionType* t, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_TypeKindVisitor7_h_