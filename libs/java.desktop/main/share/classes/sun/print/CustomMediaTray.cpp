#include <sun/print/CustomMediaTray.h>

#include <java/util/ArrayList.h>
#include <javax/print/attribute/EnumSyntax.h>
#include <javax/print/attribute/standard/Media.h>
#include <javax/print/attribute/standard/MediaTray.h>
#include <jcpp.h>

using $EnumSyntaxArray = $Array<::javax::print::attribute::EnumSyntax>;
using $MediaArray = $Array<::javax::print::attribute::standard::Media>;
using $MediaTrayArray = $Array<::javax::print::attribute::standard::MediaTray>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $MediaTray = ::javax::print::attribute::standard::MediaTray;

namespace sun {
	namespace print {

$FieldInfo _CustomMediaTray_FieldInfo_[] = {
	{"customStringTable", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(CustomMediaTray, customStringTable)},
	{"customEnumTable", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/print/attribute/standard/MediaTray;>;", $PRIVATE | $STATIC, $staticField(CustomMediaTray, customEnumTable)},
	{"choiceName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CustomMediaTray, choiceName)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CustomMediaTray, serialVersionUID)},
	{}
};

$MethodInfo _CustomMediaTray_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PRIVATE, $method(CustomMediaTray, init$, void, int32_t)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CustomMediaTray, init$, void, $String*, $String*)},
	{"getChoiceName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CustomMediaTray, getChoiceName, $String*)},
	{"getEnumValueTable", "()[Ljavax/print/attribute/EnumSyntax;", nullptr, $PROTECTED, $virtualMethod(CustomMediaTray, getEnumValueTable, $EnumSyntaxArray*)},
	{"getStringTable", "()[Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(CustomMediaTray, getStringTable, $StringArray*)},
	{"getSuperEnumTable", "()[Ljavax/print/attribute/standard/Media;", nullptr, $PUBLIC, $virtualMethod(CustomMediaTray, getSuperEnumTable, $MediaArray*)},
	{"nextValue", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $staticMethod(CustomMediaTray, nextValue, int32_t, $String*)},
	{}
};

$ClassInfo _CustomMediaTray_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.print.CustomMediaTray",
	"javax.print.attribute.standard.MediaTray",
	nullptr,
	_CustomMediaTray_FieldInfo_,
	_CustomMediaTray_MethodInfo_
};

$Object* allocate$CustomMediaTray($Class* clazz) {
	return $of($alloc(CustomMediaTray));
}

$ArrayList* CustomMediaTray::customStringTable = nullptr;
$ArrayList* CustomMediaTray::customEnumTable = nullptr;

void CustomMediaTray::init$(int32_t x) {
	$MediaTray::init$(x);
}

int32_t CustomMediaTray::nextValue($String* name) {
	$load(CustomMediaTray);
	$synchronized(class$) {
		$init(CustomMediaTray);
		$nc(CustomMediaTray::customStringTable)->add(name);
		return ($nc(CustomMediaTray::customStringTable)->size() - 1);
	}
}

void CustomMediaTray::init$($String* name, $String* choice) {
	$MediaTray::init$(nextValue(name));
	$set(this, choiceName, choice);
	$nc(CustomMediaTray::customEnumTable)->add(this);
}

$String* CustomMediaTray::getChoiceName() {
	return this->choiceName;
}

$MediaArray* CustomMediaTray::getSuperEnumTable() {
	return $fcast($MediaArray, $MediaTray::getEnumValueTable());
}

$StringArray* CustomMediaTray::getStringTable() {
	$var($StringArray, nameTable, $new($StringArray, $nc(CustomMediaTray::customStringTable)->size()));
	return $fcast($StringArray, $nc(CustomMediaTray::customStringTable)->toArray(nameTable));
}

$EnumSyntaxArray* CustomMediaTray::getEnumValueTable() {
	$var($MediaTrayArray, enumTable, $new($MediaTrayArray, $nc(CustomMediaTray::customEnumTable)->size()));
	return $fcast($EnumSyntaxArray, $nc(CustomMediaTray::customEnumTable)->toArray(enumTable));
}

void clinit$CustomMediaTray($Class* class$) {
	$assignStatic(CustomMediaTray::customStringTable, $new($ArrayList));
	$assignStatic(CustomMediaTray::customEnumTable, $new($ArrayList));
}

CustomMediaTray::CustomMediaTray() {
}

$Class* CustomMediaTray::load$($String* name, bool initialize) {
	$loadClass(CustomMediaTray, name, initialize, &_CustomMediaTray_ClassInfo_, clinit$CustomMediaTray, allocate$CustomMediaTray);
	return class$;
}

$Class* CustomMediaTray::class$ = nullptr;

	} // print
} // sun