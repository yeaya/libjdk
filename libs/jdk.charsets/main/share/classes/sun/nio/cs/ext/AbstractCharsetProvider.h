#ifndef _sun_nio_cs_ext_AbstractCharsetProvider_h_
#define _sun_nio_cs_ext_AbstractCharsetProvider_h_
//$ class sun.nio.cs.ext.AbstractCharsetProvider
//$ extends java.nio.charset.spi.CharsetProvider

#include <java/lang/Array.h>
#include <java/nio/charset/spi/CharsetProvider.h>

namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
	}
}

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

class AbstractCharsetProvider : public ::java::nio::charset::spi::CharsetProvider {
	$class(AbstractCharsetProvider, 0, ::java::nio::charset::spi::CharsetProvider)
public:
	AbstractCharsetProvider();
	void init$();
	void init$($String* pkgPrefixName);
	$StringArray* aliases($String* charsetName);
	$String* canonicalize($String* charsetName);
	virtual void charset($String* name, $String* className, $StringArray* aliases);
	virtual ::java::nio::charset::Charset* charsetForName($String* charsetName) override;
	virtual ::java::util::Iterator* charsets() override;
	virtual void deleteCharset($String* name, $StringArray* aliases);
	virtual bool hasCharset($String* name);
	virtual void init();
	::java::nio::charset::Charset* lookup($String* csn);
	static void put(::java::util::Map* m, Object$* name, Object$* value);
	static void remove(::java::util::Map* m, Object$* name);
	static bool $assertionsDisabled;
	::java::util::Map* classMap = nullptr;
	::java::util::Map* aliasMap = nullptr;
	::java::util::Map* aliasNameMap = nullptr;
	::java::util::Map* cache = nullptr;
	$String* packagePrefix = nullptr;
};

			} // ext
		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_ext_AbstractCharsetProvider_h_