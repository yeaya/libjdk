#include <com/sun/java/swing/plaf/motif/MotifLabelUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLabelUI.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef MOTIF_LABEL_UI_KEY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicLabelUI = ::javax::swing::plaf::basic::BasicLabelUI;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$Object* MotifLabelUI::MOTIF_LABEL_UI_KEY = nullptr;

void MotifLabelUI::init$() {
	$BasicLabelUI::init$();
}

$ComponentUI* MotifLabelUI::createUI($JComponent* c) {
	$init(MotifLabelUI);
	$useLocalObjectStack();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(MotifLabelUI, motifLabelUI, $cast(MotifLabelUI, $nc(appContext)->get(MotifLabelUI::MOTIF_LABEL_UI_KEY)));
	if (motifLabelUI == nullptr) {
		$assign(motifLabelUI, $new(MotifLabelUI));
		appContext->put(MotifLabelUI::MOTIF_LABEL_UI_KEY, motifLabelUI);
	}
	return motifLabelUI;
}

void MotifLabelUI::clinit$($Class* clazz) {
	$assignStatic(MotifLabelUI::MOTIF_LABEL_UI_KEY, $new($Object));
}

MotifLabelUI::MotifLabelUI() {
}

$Class* MotifLabelUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MOTIF_LABEL_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MotifLabelUI, MOTIF_LABEL_UI_KEY)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifLabelUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifLabelUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifLabelUI",
		"javax.swing.plaf.basic.BasicLabelUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MotifLabelUI, name, initialize, &classInfo$$, MotifLabelUI::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifLabelUI));
	});
	return class$;
}

$Class* MotifLabelUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com