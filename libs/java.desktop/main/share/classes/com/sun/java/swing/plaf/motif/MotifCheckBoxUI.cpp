#include <com/sun/java/swing/plaf/motif/MotifCheckBoxUI.h>
#include <com/sun/java/swing/plaf/motif/MotifRadioButtonUI.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicRadioButtonUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef MOTIF_CHECK_BOX_UI_KEY

using $MotifRadioButtonUI = ::com::sun::java::swing::plaf::motif::MotifRadioButtonUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$Object* MotifCheckBoxUI::MOTIF_CHECK_BOX_UI_KEY = nullptr;
$String* MotifCheckBoxUI::propertyPrefix = nullptr;

void MotifCheckBoxUI::init$() {
	$MotifRadioButtonUI::init$();
	this->defaults_initialized = false;
}

$ComponentUI* MotifCheckBoxUI::createUI($JComponent* c) {
	$init(MotifCheckBoxUI);
	$useLocalObjectStack();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MotifCheckBoxUI, motifCheckBoxUI, $cast(MotifCheckBoxUI, $nc(appContext)->get(MotifCheckBoxUI::MOTIF_CHECK_BOX_UI_KEY)));
	if (motifCheckBoxUI == nullptr) {
		$assign(motifCheckBoxUI, $new(MotifCheckBoxUI));
		appContext->put(MotifCheckBoxUI::MOTIF_CHECK_BOX_UI_KEY, motifCheckBoxUI);
	}
	return motifCheckBoxUI;
}

$String* MotifCheckBoxUI::getPropertyPrefix() {
	return MotifCheckBoxUI::propertyPrefix;
}

void MotifCheckBoxUI::installDefaults($AbstractButton* b) {
	$useLocalObjectStack();
	$MotifRadioButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$set(this, icon, $UIManager::getIcon($$str({$(getPropertyPrefix()), "icon"_s})));
		this->defaults_initialized = true;
	}
}

void MotifCheckBoxUI::uninstallDefaults($AbstractButton* b) {
	$MotifRadioButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

void MotifCheckBoxUI::clinit$($Class* clazz) {
	$assignStatic(MotifCheckBoxUI::propertyPrefix, "CheckBox."_s);
	$assignStatic(MotifCheckBoxUI::MOTIF_CHECK_BOX_UI_KEY, $new($Object));
}

MotifCheckBoxUI::MotifCheckBoxUI() {
}

$Class* MotifCheckBoxUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MOTIF_CHECK_BOX_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifCheckBoxUI, MOTIF_CHECK_BOX_UI_KEY)},
		{"propertyPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifCheckBoxUI, propertyPrefix)},
		{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(MotifCheckBoxUI, defaults_initialized)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifCheckBoxUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifCheckBoxUI, createUI, $ComponentUI*, $JComponent*)},
		{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MotifCheckBoxUI, getPropertyPrefix, $String*)},
		{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PUBLIC, $virtualMethod(MotifCheckBoxUI, installDefaults, void, $AbstractButton*)},
		{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED, $virtualMethod(MotifCheckBoxUI, uninstallDefaults, void, $AbstractButton*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifCheckBoxUI",
		"com.sun.java.swing.plaf.motif.MotifRadioButtonUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MotifCheckBoxUI, name, initialize, &classInfo$$, MotifCheckBoxUI::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MotifCheckBoxUI);
	});
	return class$;
}

$Class* MotifCheckBoxUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com