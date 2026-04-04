#include <TextBeanProperty.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/Introspector.h>
#include <java/beans/PropertyDescriptor.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $BeanInfo = ::java::beans::BeanInfo;
using $Introspector = ::java::beans::Introspector;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;

void TextBeanProperty::init$() {
}

void TextBeanProperty::main($StringArray* args) {
	$load($JTextComponent);
	test($JTextComponent::class$);
	$load($JTextField);
	test($JTextField::class$);
	$load($JTextArea);
	test($JTextArea::class$);
	$load($JPasswordField);
	test($JPasswordField::class$);
}

void TextBeanProperty::test($Class* beanClass) {
	$useLocalObjectStack();
	$var($BeanInfo, info, $Introspector::getBeanInfo(beanClass));
	$var($PropertyDescriptorArray, pd, $nc(info)->getPropertyDescriptors());
	int32_t i = 0;
	for (i = 0; i < $nc(pd)->length; ++i) {
		if ($$nc($nc(pd->get(i))->getName())->equals("text"_s)) {
			break;
		}
	}
	if ($nc(pd->get(i))->isBound()) {
		$nc($System::err)->println($$str({"Property: "_s, pd->get(i)}));
		$throwNew($RuntimeException, "text property is flagged as bound"_s);
	}
}

TextBeanProperty::TextBeanProperty() {
}

$Class* TextBeanProperty::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TextBeanProperty, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TextBeanProperty, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(TextBeanProperty, test, void, $Class*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"TextBeanProperty",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TextBeanProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextBeanProperty);
	});
	return class$;
}

$Class* TextBeanProperty::class$ = nullptr;