#include <javax/swing/colorchooser/ColorChooserComponentFactory.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorChooserPanel.h>
#include <javax/swing/colorchooser/ColorModel.h>
#include <javax/swing/colorchooser/ColorModelCMYK.h>
#include <javax/swing/colorchooser/ColorModelHSL.h>
#include <javax/swing/colorchooser/ColorModelHSV.h>
#include <javax/swing/colorchooser/DefaultPreviewPanel.h>
#include <javax/swing/colorchooser/DefaultSwatchChooserPanel.h>
#include <jcpp.h>

using $AbstractColorChooserPanelArray = $Array<::javax::swing::colorchooser::AbstractColorChooserPanel>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ColorChooserPanel = ::javax::swing::colorchooser::ColorChooserPanel;
using $ColorModel = ::javax::swing::colorchooser::ColorModel;
using $ColorModelCMYK = ::javax::swing::colorchooser::ColorModelCMYK;
using $ColorModelHSL = ::javax::swing::colorchooser::ColorModelHSL;
using $ColorModelHSV = ::javax::swing::colorchooser::ColorModelHSV;
using $DefaultPreviewPanel = ::javax::swing::colorchooser::DefaultPreviewPanel;
using $DefaultSwatchChooserPanel = ::javax::swing::colorchooser::DefaultSwatchChooserPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

void ColorChooserComponentFactory::init$() {
}

$AbstractColorChooserPanelArray* ColorChooserComponentFactory::getDefaultChooserPanels() {
	$useLocalObjectStack();
	return $new($AbstractColorChooserPanelArray, {
		$$new($DefaultSwatchChooserPanel),
		$$new($ColorChooserPanel, $$new($ColorModelHSV)),
		$$new($ColorChooserPanel, $$new($ColorModelHSL)),
		$$new($ColorChooserPanel, $$new($ColorModel)),
		$$new($ColorChooserPanel, $$new($ColorModelCMYK))
	});
}

$JComponent* ColorChooserComponentFactory::getPreviewPanel() {
	return $new($DefaultPreviewPanel);
}

ColorChooserComponentFactory::ColorChooserComponentFactory() {
}

$Class* ColorChooserComponentFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ColorChooserComponentFactory, init$, void)},
		{"getDefaultChooserPanels", "()[Ljavax/swing/colorchooser/AbstractColorChooserPanel;", nullptr, $PUBLIC | $STATIC, $staticMethod(ColorChooserComponentFactory, getDefaultChooserPanels, $AbstractColorChooserPanelArray*)},
		{"getPreviewPanel", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC | $STATIC, $staticMethod(ColorChooserComponentFactory, getPreviewPanel, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.colorchooser.ColorChooserComponentFactory",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ColorChooserComponentFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ColorChooserComponentFactory);
	});
	return class$;
}

$Class* ColorChooserComponentFactory::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax