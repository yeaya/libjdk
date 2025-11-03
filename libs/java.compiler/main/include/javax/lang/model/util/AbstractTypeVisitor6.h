#ifndef _javax_lang_model_util_AbstractTypeVisitor6_h_
#define _javax_lang_model_util_AbstractTypeVisitor6_h_
//$ class javax.lang.model.util.AbstractTypeVisitor6
//$ extends javax.lang.model.type.TypeVisitor

#include <javax/lang/model/type/TypeVisitor.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace type {
				class IntersectionType;
				class TypeMirror;
				class UnionType;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import AbstractTypeVisitor6 : public ::javax::lang::model::type::TypeVisitor {
	$class(AbstractTypeVisitor6, $NO_CLASS_INIT, ::javax::lang::model::type::TypeVisitor)
public:
	AbstractTypeVisitor6();
	void init$();
	virtual $Object* visit(::javax::lang::model::type::TypeMirror* t, Object$* p) override;
	virtual $Object* visit(::javax::lang::model::type::TypeMirror* t) override;
	virtual $Object* visitIntersection(::javax::lang::model::type::IntersectionType* t, Object$* p) override;
	virtual $Object* visitUnion(::javax::lang::model::type::UnionType* t, Object$* p) override;
	virtual $Object* visitUnknown(::javax::lang::model::type::TypeMirror* t, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_AbstractTypeVisitor6_h_