#include <bug6302464$CustomLookAndFeel.h>

#include <bug6302464.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

#undef KEY_TEXT_ANTIALIASING
#undef KEY_TEXT_LCD_CONTRAST
#undef VALUE_TEXT_ANTIALIAS_GASP

using $RenderingHints = ::java::awt::RenderingHints;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

$FieldInfo _bug6302464$CustomLookAndFeel_FieldInfo_[] = {
	{"useAAHints", "Z", nullptr, $PRIVATE | $FINAL, $field(bug6302464$CustomLookAndFeel, useAAHints)},
	{}
};

$MethodInfo _bug6302464$CustomLookAndFeel_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(bug6302464$CustomLookAndFeel, init$, void, bool)},
	{"getAAHint", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(bug6302464$CustomLookAndFeel, getAAHint, $Object*)},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(bug6302464$CustomLookAndFeel, getDescription, $String*)},
	{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(bug6302464$CustomLookAndFeel, getID, $String*)},
	{"getLCDContarstHint", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(bug6302464$CustomLookAndFeel, getLCDContarstHint, $Object*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(bug6302464$CustomLookAndFeel, getName, $String*)},
	{"initClassDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, $PROTECTED, $virtualMethod(bug6302464$CustomLookAndFeel, initClassDefaults, void, $UIDefaults*)},
	{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(bug6302464$CustomLookAndFeel, isNativeLookAndFeel, bool)},
	{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(bug6302464$CustomLookAndFeel, isSupportedLookAndFeel, bool)},
	{}
};

$InnerClassInfo _bug6302464$CustomLookAndFeel_InnerClassesInfo_[] = {
	{"bug6302464$CustomLookAndFeel", "bug6302464", "CustomLookAndFeel", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug6302464$CustomLookAndFeel_ClassInfo_ = {
	$ACC_SUPER,
	"bug6302464$CustomLookAndFeel",
	"javax.swing.plaf.basic.BasicLookAndFeel",
	nullptr,
	_bug6302464$CustomLookAndFeel_FieldInfo_,
	_bug6302464$CustomLookAndFeel_MethodInfo_,
	nullptr,
	nullptr,
	_bug6302464$CustomLookAndFeel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug6302464"
};

$Object* allocate$bug6302464$CustomLookAndFeel($Class* clazz) {
	return $of($alloc(bug6302464$CustomLookAndFeel));
}

void bug6302464$CustomLookAndFeel::init$(bool useAAHints) {
	$BasicLookAndFeel::init$();
	this->useAAHints = useAAHints;
}

$String* bug6302464$CustomLookAndFeel::getDescription() {
	return getName();
}

$String* bug6302464$CustomLookAndFeel::getName() {
	return "Custom L&F"_s;
}

$String* bug6302464$CustomLookAndFeel::getID() {
	return getName();
}

bool bug6302464$CustomLookAndFeel::isNativeLookAndFeel() {
	return false;
}

bool bug6302464$CustomLookAndFeel::isSupportedLookAndFeel() {
	return true;
}

void bug6302464$CustomLookAndFeel::initClassDefaults($UIDefaults* table) {
	$useLocalCurrentObjectStackCache();
	$BasicLookAndFeel::initClassDefaults(table);
	$init($RenderingHints);
	$nc(table)->put($RenderingHints::KEY_TEXT_ANTIALIASING, $(getAAHint()));
	table->put($RenderingHints::KEY_TEXT_LCD_CONTRAST, $(getLCDContarstHint()));
}

$Object* bug6302464$CustomLookAndFeel::getAAHint() {
	$init($RenderingHints);
	return $of(this->useAAHints ? $RenderingHints::VALUE_TEXT_ANTIALIAS_GASP : ($Object*)nullptr);
}

$Object* bug6302464$CustomLookAndFeel::getLCDContarstHint() {
	return $of(this->useAAHints ? $Integer::valueOf(115) : ($Integer*)nullptr);
}

bug6302464$CustomLookAndFeel::bug6302464$CustomLookAndFeel() {
}

$Class* bug6302464$CustomLookAndFeel::load$($String* name, bool initialize) {
	$loadClass(bug6302464$CustomLookAndFeel, name, initialize, &_bug6302464$CustomLookAndFeel_ClassInfo_, allocate$bug6302464$CustomLookAndFeel);
	return class$;
}

$Class* bug6302464$CustomLookAndFeel::class$ = nullptr;