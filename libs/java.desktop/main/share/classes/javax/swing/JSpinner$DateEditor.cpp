#include <javax/swing/JSpinner$DateEditor.h>
#include <java/awt/Component.h>
#include <java/lang/Comparable.h>
#include <java/lang/Math.h>
#include <java/text/DateFormat.h>
#include <java/text/Format.h>
#include <java/text/ParseException.h>
#include <java/text/SimpleDateFormat.h>
#include <java/text/spi/DateFormatProvider.h>
#include <java/util/Calendar.h>
#include <java/util/Locale.h>
#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DateEditorFormatter.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerDateModel.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/text/DateFormatter.h>
#include <javax/swing/text/DefaultFormatterFactory.h>
#include <javax/swing/text/JTextComponent.h>
#include <sun/util/locale/provider/LocaleProviderAdapter.h>
#include <sun/util/locale/provider/LocaleResources.h>
#include <jcpp.h>

#undef SHORT

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $ParseException = ::java::text::ParseException;
using $SimpleDateFormat = ::java::text::SimpleDateFormat;
using $DateFormatProvider = ::java::text::spi::DateFormatProvider;
using $Calendar = ::java::util::Calendar;
using $Locale = ::java::util::Locale;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DateEditorFormatter = ::javax::swing::JSpinner$DateEditorFormatter;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $SpinnerDateModel = ::javax::swing::SpinnerDateModel;
using $DateFormatter = ::javax::swing::text::DateFormatter;
using $DefaultFormatterFactory = ::javax::swing::text::DefaultFormatterFactory;
using $LocaleProviderAdapter = ::sun::util::locale::provider::LocaleProviderAdapter;
using $LocaleResources = ::sun::util::locale::provider::LocaleResources;

namespace javax {
	namespace swing {

$String* JSpinner$DateEditor::getDefaultPattern($Locale* loc) {
	$init(JSpinner$DateEditor);
	$useLocalObjectStack();
	$load($DateFormatProvider);
	$var($LocaleProviderAdapter, adapter, $LocaleProviderAdapter::getAdapter($DateFormatProvider::class$, loc));
	$var($LocaleResources, lr, $nc(adapter)->getLocaleResources(loc));
	if (lr == nullptr) {
		$assign(lr, $$nc($LocaleProviderAdapter::forJRE())->getLocaleResources(loc));
	}
	return $nc(lr)->getDateTimePattern($DateFormat::SHORT, $DateFormat::SHORT, nullptr);
}

void JSpinner$DateEditor::init$($JSpinner* spinner) {
	$useLocalObjectStack();
	JSpinner$DateEditor::init$(spinner, $(getDefaultPattern($($nc(spinner)->getLocale()))));
}

void JSpinner$DateEditor::init$($JSpinner* spinner, $String* dateFormatPattern) {
	$useLocalObjectStack();
	JSpinner$DateEditor::init$(spinner, $$new($SimpleDateFormat, dateFormatPattern, $($nc(spinner)->getLocale())));
}

void JSpinner$DateEditor::init$($JSpinner* spinner, $DateFormat* format) {
	$useLocalObjectStack();
	$JSpinner$DefaultEditor::init$(spinner);
	if (!($instanceOf($SpinnerDateModel, $($nc(spinner)->getModel())))) {
		$throwNew($IllegalArgumentException, "model not a SpinnerDateModel"_s);
	}
	$var($SpinnerDateModel, model, $cast($SpinnerDateModel, spinner->getModel()));
	$var($DateFormatter, formatter, $new($JSpinner$DateEditorFormatter, model, format));
	$var($DefaultFormatterFactory, factory, $new($DefaultFormatterFactory, formatter));
	$var($JFormattedTextField, ftf, getTextField());
	$nc(ftf)->setEditable(true);
	ftf->setFormatterFactory(factory);
	try {
		$var($String, maxString, formatter->valueToString($($nc(model)->getStart())));
		$var($String, minString, formatter->valueToString($(model->getEnd())));
		int32_t var$0 = $nc(maxString)->length();
		ftf->setColumns($Math::max(var$0, $nc(minString)->length()));
	} catch ($ParseException& e) {
	}
}

$SimpleDateFormat* JSpinner$DateEditor::getFormat() {
	$useLocalObjectStack();
	return $cast($SimpleDateFormat, $$cast($DateFormatter, $$nc(getTextField())->getFormatter())->getFormat());
}

$SpinnerDateModel* JSpinner$DateEditor::getModel() {
	return $cast($SpinnerDateModel, $$nc(getSpinner())->getModel());
}

JSpinner$DateEditor::JSpinner$DateEditor() {
}

$Class* JSpinner$DateEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JSpinner;)V", nullptr, $PUBLIC, $method(JSpinner$DateEditor, init$, void, $JSpinner*)},
		{"<init>", "(Ljavax/swing/JSpinner;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(JSpinner$DateEditor, init$, void, $JSpinner*, $String*)},
		{"<init>", "(Ljavax/swing/JSpinner;Ljava/text/DateFormat;)V", nullptr, $PRIVATE, $method(JSpinner$DateEditor, init$, void, $JSpinner*, $DateFormat*)},
		{"getDefaultPattern", "(Ljava/util/Locale;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(JSpinner$DateEditor, getDefaultPattern, $String*, $Locale*)},
		{"getFormat", "()Ljava/text/SimpleDateFormat;", nullptr, $PUBLIC, $virtualMethod(JSpinner$DateEditor, getFormat, $SimpleDateFormat*)},
		{"getModel", "()Ljavax/swing/SpinnerDateModel;", nullptr, $PUBLIC, $virtualMethod(JSpinner$DateEditor, getModel, $SpinnerDateModel*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSpinner$DateEditor", "javax.swing.JSpinner", "DateEditor", $PUBLIC | $STATIC},
		{"javax.swing.JSpinner$DefaultEditor", "javax.swing.JSpinner", "DefaultEditor", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.JSpinner$DateEditor",
		"javax.swing.JSpinner$DefaultEditor",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JSpinner"
	};
	$loadClass(JSpinner$DateEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSpinner$DateEditor));
	});
	return class$;
}

$Class* JSpinner$DateEditor::class$ = nullptr;

	} // swing
} // javax