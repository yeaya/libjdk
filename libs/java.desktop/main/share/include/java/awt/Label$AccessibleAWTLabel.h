#ifndef _java_awt_Label$AccessibleAWTLabel_h_
#define _java_awt_Label$AccessibleAWTLabel_h_
//$ class java.awt.Label$AccessibleAWTLabel
//$ extends java.awt.Component$AccessibleAWTComponent

#include <java/awt/Component$AccessibleAWTComponent.h>

namespace java {
	namespace awt {
		class Label;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleRole;
	}
}

namespace java {
	namespace awt {

class $import Label$AccessibleAWTLabel : public ::java::awt::Component$AccessibleAWTComponent {
	$class(Label$AccessibleAWTLabel, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent)
public:
	Label$AccessibleAWTLabel();
	void init$(::java::awt::Label* this$0);
	virtual $String* getAccessibleName() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	::java::awt::Label* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xce787ae9c9bdf34a;
};

	} // awt
} // java

#endif // _java_awt_Label$AccessibleAWTLabel_h_