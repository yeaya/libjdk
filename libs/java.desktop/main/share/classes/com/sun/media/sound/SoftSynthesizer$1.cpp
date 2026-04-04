#include <com/sun/media/sound/SoftSynthesizer$1.h>
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

void SoftSynthesizer$1::init$($SoftSynthesizer* this$0) {
	$set(this, this$0, this$0);
}

$Object* SoftSynthesizer$1::run() {
	$useLocalObjectStack();
	$var($File, javahome, $new($File, $($$nc($System::getProperties())->getProperty("java.home"_s))));
	$var($File, libaudio, $new($File, $$new($File, javahome, "lib"_s), "audio"_s));
	if (libaudio->isDirectory()) {
		$var($File, foundfile, nullptr);
		$var($FileArray, files, libaudio->listFiles());
		if (files != nullptr) {
			for (int32_t i = 0; i < files->length; ++i) {
				$var($File, file, files->get(i));
				if ($nc(file)->isFile()) {
					$var($String, lname, $$nc(file->getName())->toLowerCase());
					bool var$0 = lname->endsWith(".sf2"_s);
					if (var$0 || lname->endsWith(".dls"_s)) {
						bool var$1 = foundfile == nullptr;
						if (!var$1) {
							int64_t var$2 = file->length();
							var$1 = var$2 > foundfile->length();
						}
						if (var$1) {
							$assign(foundfile, file);
						}
					}
				}
			}
		}
		if (foundfile != nullptr) {
			try {
				return $new($FileInputStream, foundfile);
			} catch ($IOException& e) {
			}
		}
	}
	return nullptr;
}

SoftSynthesizer$1::SoftSynthesizer$1() {
}

$Class* SoftSynthesizer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftSynthesizer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, 0, $method(SoftSynthesizer$1, init$, void, $SoftSynthesizer*)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(SoftSynthesizer$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftSynthesizer",
		"getDefaultSoundbank",
		"()Ljavax/sound/midi/Soundbank;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftSynthesizer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftSynthesizer$1",
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
	$loadClass(SoftSynthesizer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftSynthesizer$1);
	});
	return class$;
}

$Class* SoftSynthesizer$1::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com