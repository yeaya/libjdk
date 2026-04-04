#ifndef _sun_print_CustomMediaTray_h_
#define _sun_print_CustomMediaTray_h_
//$ class sun.print.CustomMediaTray
//$ extends javax.print.attribute.standard.MediaTray

#include <java/lang/Array.h>
#include <javax/print/attribute/standard/MediaTray.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			class EnumSyntax;
		}
	}
}
namespace javax {
	namespace print {
		namespace attribute {
			namespace standard {
				class Media;
			}
		}
	}
}

namespace sun {
	namespace print {

class CustomMediaTray : public ::javax::print::attribute::standard::MediaTray {
	$class(CustomMediaTray, 0, ::javax::print::attribute::standard::MediaTray)
public:
	CustomMediaTray();
	static void clinit$(::java::lang::Class* clazz);
	void init$(int32_t x);
	void init$($String* name, $String* choice);
	virtual $String* getChoiceName();
	virtual $Array<::javax::print::attribute::EnumSyntax>* getEnumValueTable() override;
	virtual $StringArray* getStringTable() override;
	virtual $Array<::javax::print::attribute::standard::Media>* getSuperEnumTable();
	static int32_t nextValue($String* name);
	static ::java::util::ArrayList* customStringTable;
	static ::java::util::ArrayList* customEnumTable;
	$String* choiceName = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x0e25d18deea9d5c5;
};

	} // print
} // sun

#endif // _sun_print_CustomMediaTray_h_