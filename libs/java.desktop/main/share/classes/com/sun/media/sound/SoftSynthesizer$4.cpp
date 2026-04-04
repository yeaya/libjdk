#include <com/sun/media/sound/SoftSynthesizer$4.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <jcpp.h>

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

void SoftSynthesizer$4::init$($SoftSynthesizer* this$0) {
	$set(this, this$0, this$0);
}

$Object* SoftSynthesizer$4::run() {
	$useLocalObjectStack();
	$var($File, userhome, $new($File, $($System::getProperty("user.home"_s)), ".gervill"_s));
	$var($File, emg_soundbank_file, $new($File, userhome, "soundbank-emg.sf2"_s));
	if (emg_soundbank_file->isFile()) {
		try {
			return $new($FileInputStream, emg_soundbank_file);
		} catch ($IOException& e) {
		}
	}
	return nullptr;
}

SoftSynthesizer$4::SoftSynthesizer$4() {
}

$Class* SoftSynthesizer$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $FINAL | $SYNTHETIC, $field(SoftSynthesizer$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, 0, $method(SoftSynthesizer$4, init$, void, $SoftSynthesizer*)},
		{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(SoftSynthesizer$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.media.sound.SoftSynthesizer",
		"getDefaultSoundbank",
		"()Ljavax/sound/midi/Soundbank;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftSynthesizer$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftSynthesizer$4",
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
	$loadClass(SoftSynthesizer$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftSynthesizer$4);
	});
	return class$;
}

$Class* SoftSynthesizer$4::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com