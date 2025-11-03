#ifndef _javax_lang_model_util_TypeKindVisitor8_h_
#define _javax_lang_model_util_TypeKindVisitor8_h_
//$ class javax.lang.model.util.TypeKindVisitor8
//$ extends javax.lang.model.util.TypeKindVisitor7

#include <javax/lang/model/util/TypeKindVisitor7.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class IntersectionType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export TypeKindVisitor8 : public ::javax::lang::model::util::TypeKindVisitor7 {
	$class(TypeKindVisitor8, $NO_CLASS_INIT, ::javax::lang::model::util::TypeKindVisitor7)
public:
	TypeKindVisitor8();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitIntersection(::javax::lang::model::type::IntersectionType* t, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_TypeKindVisitor8_h_