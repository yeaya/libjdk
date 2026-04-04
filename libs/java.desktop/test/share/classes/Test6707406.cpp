#include <Test6707406.h>
#include <java/awt/Color.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/colorchooser/ColorSelectionModel.h>
#include <javax/swing/plaf/ColorChooserUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicColorChooserUI.h>
#include <jcpp.h>

#undef BLUE

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JColorChooser = ::javax::swing::JColorChooser;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $ColorChooserUI = ::javax::swing::plaf::ColorChooserUI;
using $BasicColorChooserUI = ::javax::swing::plaf::basic::BasicColorChooserUI;

int32_t Test6707406::hashCode() {
	 return this->$BasicColorChooserUI::hashCode();
}

bool Test6707406::equals(Object$* arg0) {
	 return this->$BasicColorChooserUI::equals(arg0);
}

$Object* Test6707406::clone() {
	 return this->$BasicColorChooserUI::clone();
}

$String* Test6707406::toString() {
	 return this->$BasicColorChooserUI::toString();
}

void Test6707406::finalize() {
	this->$BasicColorChooserUI::finalize();
}

void Test6707406::init$() {
	$BasicColorChooserUI::init$();
}

void Test6707406::main($StringArray* args) {
	$init(Test6707406);
	$useLocalObjectStack();
	test();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$nc($System::out)->println($($nc(laf)->getName()));
				$UIManager::setLookAndFeel($(laf->getClassName()));
				test();
			}
		}
	}
}

void Test6707406::test() {
	$init(Test6707406);
	$useLocalObjectStack();
	$var($JColorChooser, chooser, $new($JColorChooser));
	$$sure($ColorChooserUI, chooser->getUI())->uninstallUI(chooser);
	$$new(Test6707406)->installUI(chooser);
	$init($Color);
	$$nc(chooser->getSelectionModel())->setSelectedColor($Color::BLUE);
}

$PropertyChangeListener* Test6707406::createPropertyChangeListener() {
	return this;
}

void Test6707406::propertyChange($PropertyChangeEvent* event) {
}

Test6707406::Test6707406() {
}

$Class* Test6707406::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6707406, init$, void)},
		{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(Test6707406, createPropertyChangeListener, $PropertyChangeListener*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6707406, main, void, $StringArray*), "java.lang.Exception"},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test6707406, propertyChange, void, $PropertyChangeEvent*)},
		{"test", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test6707406, test, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6707406",
		"javax.swing.plaf.basic.BasicColorChooserUI",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(Test6707406, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6707406));
	});
	return class$;
}

$Class* Test6707406::class$ = nullptr;