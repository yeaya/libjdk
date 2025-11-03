#ifndef _javax_lang_model_util_SimpleElementVisitor6_h_
#define _javax_lang_model_util_SimpleElementVisitor6_h_
//$ class javax.lang.model.util.SimpleElementVisitor6
//$ extends javax.lang.model.util.AbstractElementVisitor6

#include <javax/lang/model/util/AbstractElementVisitor6.h>

#pragma push_macro("DEFAULT_VALUE")
#undef DEFAULT_VALUE

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class Element;
				class ExecutableElement;
				class PackageElement;
				class TypeElement;
				class TypeParameterElement;
				class VariableElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $import SimpleElementVisitor6 : public ::javax::lang::model::util::AbstractElementVisitor6 {
	$class(SimpleElementVisitor6, $NO_CLASS_INIT, ::javax::lang::model::util::AbstractElementVisitor6)
public:
	SimpleElementVisitor6();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* defaultAction(::javax::lang::model::element::Element* e, Object$* p);
	virtual $Object* visitExecutable(::javax::lang::model::element::ExecutableElement* e, Object$* p) override;
	virtual $Object* visitPackage(::javax::lang::model::element::PackageElement* e, Object$* p) override;
	virtual $Object* visitType(::javax::lang::model::element::TypeElement* e, Object$* p) override;
	virtual $Object* visitTypeParameter(::javax::lang::model::element::TypeParameterElement* e, Object$* p) override;
	virtual $Object* visitVariable(::javax::lang::model::element::VariableElement* e, Object$* p) override;
	$Object* DEFAULT_VALUE = nullptr;
};

			} // util
		} // model
	} // lang
} // javax

#pragma pop_macro("DEFAULT_VALUE")

#endif // _javax_lang_model_util_SimpleElementVisitor6_h_