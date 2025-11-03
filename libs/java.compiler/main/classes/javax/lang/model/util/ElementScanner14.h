#ifndef _javax_lang_model_util_ElementScanner14_h_
#define _javax_lang_model_util_ElementScanner14_h_
//$ class javax.lang.model.util.ElementScanner14
//$ extends javax.lang.model.util.ElementScanner9

#include <javax/lang/model/util/ElementScanner9.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace lang {
		namespace model {
			namespace element {
				class ExecutableElement;
				class Parameterizable;
				class RecordComponentElement;
				class TypeElement;
			}
		}
	}
}

namespace javax {
	namespace lang {
		namespace model {
			namespace util {

class $export ElementScanner14 : public ::javax::lang::model::util::ElementScanner9 {
	$class(ElementScanner14, $NO_CLASS_INIT, ::javax::lang::model::util::ElementScanner9)
public:
	ElementScanner14();
	void init$();
	void init$(Object$* defaultValue);
	::java::util::List* createScanningList(::javax::lang::model::element::Parameterizable* element, ::java::util::List* toBeScanned);
	virtual $Object* visitExecutable(::javax::lang::model::element::ExecutableElement* e, Object$* p) override;
	virtual $Object* visitRecordComponent(::javax::lang::model::element::RecordComponentElement* e, Object$* p) override;
	virtual $Object* visitType(::javax::lang::model::element::TypeElement* e, Object$* p) override;
};

			} // util
		} // model
	} // lang
} // javax

#endif // _javax_lang_model_util_ElementScanner14_h_