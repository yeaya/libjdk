#include <com/sun/media/sound/SoftSynthesizer$2.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/util/Properties.h>
#include <jcpp.h>

using $FileArray = $Array<::java::io::File>;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftSynthesizer$2::init$($SoftSynthesizer* this$0) {
	$set(this, this$0, this$0);
}

$Object* SoftSynthesizer$2::run() {
	$useLocalObjectStack();
	if ($$nc($$nc($System::getProperties())->getProperty("os.name"_s))->startsWith("Linux"_s)) {
		$var($FileArray, systemSoundFontsDir, $new($FileArray, {
			$$new($File, "/usr/share/soundfonts/"_s),
			$$new($File, "/usr/local/share/soundfonts/"_s),
			$$new($File, "/usr/share/sounds/sf2/"_s),
			$$new($File, "/usr/local/share/sounds/sf2/"_s)
		}));
		{
			$var($FileArray, arr$, systemSoundFontsDir);
			for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
				$var($File, systemSoundFontDir, arr$->get(i$));
				if ($nc(systemSoundFontDir)->isDirectory()) {
					$var($File, defaultSoundFont, $new($File, systemSoundFontDir, "default.sf2"_s));
					if (defaultSoundFont->isFile()) {
						try {
							return $new($FileInputStream, defaultSoundFont);
						} catch ($IOException& e) {
						}
					}
				}
			}
		}
	}
	return nullptr;
}

SoftSynthesizer$2::SoftSynthesizer$2() {
}

$Class* SoftSynthesizer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftSynthesizer$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, 0, $method(SoftSynthesizer$2, init$, void, $SoftSynthesizer*)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(SoftSynthesizer$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftSynthesizer",
		"getDefaultSoundbank",
		"()Ljavax/sound/midi/Soundbank;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftSynthesizer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftSynthesizer$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftSynthesizer"
	};
	$loadClass(SoftSynthesizer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftSynthesizer$2);
	});
	return class$;
}

$Class* SoftSynthesizer$2::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com