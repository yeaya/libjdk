#ifndef _javax_lang_model_util_ElementKindVisitor6_h_
#define _javax_lang_model_util_ElementKindVisitor6_h_
//$ class javax.lang.model.util.ElementKindVisitor6
//$ extends javax.lang.model.util.SimpleElementVisitor6

#include <javax/lang/model/util/SimpleElementVisitor6.h>

namespace javax {
	namespace lang {
		namespace model {
			namespace element {
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

class $export ElementKindVisitor6 : public ::javax::lang::model::util::SimpleElementVisitor6 {
	$class(ElementKindVisitor6, 0, ::javax::lang::model::util::SimpleElementVisitor6)
public:
	ElementKindVisitor6();
	void init$();
	void init$(Object$* defaultValue);
	virtual $Object* visitExecutable(::javax::lang::model::element::ExecutableElement* e, Object$* p) override;
	virtual $Object* visitExecutableAsConstructor(::javax::lang::model::element::ExecutableElement* e, Object$* p);
	virtual $Object* visitExecutableAsInstanceInit(::javax::lang::model::element::ExecutableElement* e, Object$* p);
	virtual $Object* visitExecutableAsMethod(::javax::lang::model::element::ExecutableElement* e, Object$* p);
	virtual $Object* visitExecutableAsStaticInit(::javax::lang::model::element::ExecutableElement* e, Object$* p);
	virtual $Object* visitPackage(::javax::lang::model::element::PackageElement* e, Object$* p) override;
	virtual $Object* visitType(::javax::lang::model::element::TypeElement* e, Object$* p) override;
	virtual $Object* visitTypeAsAnnotationType(::javax::lang::model::element::TypeElement* e, Object$* p);
	virtual $Object* visitTypeAsClass(::javax::lang::model::element::TypeElement* e, Object$* p);
	virtual $Object* visitTypeAsEnum(::javax::lang::model::element::TypeElement* e, Object$* p);
	virtual $Object* visitTypeAsInterface(::javax::lang::model::element::TypeElement* e, Object$* p);
	virtual $Object* visitTypeAsRecord(::javax::lang::model::element::TypeElement* e, Object$* p);
	virtual $Object* visitTypeParameter(::javax::lang::model::element::TypeParameterElement* e, Object$* p) override;
	virtual $Object* visitVariable(::javax::lang::model::element::VariableElement* e, Object$* p) override;
	virtual $Object* visitVariableAsBindingVariable(::javax::lang::model::element::VariableElement* e, Object$* p);
	virtual $Object* visitVariableAsEnumConstant(::javax::lang::model::element::VariableElement* e, Object$* p);
	virtual $Object* visitVariableAsExceptionParameter(::javax::lang::model::element::VariableElement* e, Object$* p);
	virtual $Object* visitVariableAsField(::javax::lang::model::element::VariableElement* e, Object$* p);
	virtual $Object* visitVariableAsLocalVariable(::javax::lang::model::element::VariableElement* e, Object$* p);
	virtual $Object* visitVariableAsParameter(::javax::lang::model::element::VariableElement* e, Object$* p);
	virtual $Object* visitVariableAsResourceVariable(::javax::lang::model::element::VariableElement* e, Object$* p);
	static bool $assertionsDisabled;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_ElementKindVisitor6_h_