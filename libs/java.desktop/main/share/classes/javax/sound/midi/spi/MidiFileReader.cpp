#include <javax/sound/midi/spi/MidiFileReader.h>
#include <java/io/File.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <javax/sound/midi/MidiFileFormat.h>
#include <javax/sound/midi/Sequence.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $MidiFileFormat = ::javax::sound::midi::MidiFileFormat;
using $Sequence = ::javax::sound::midi::Sequence;

namespace javax {
	namespace sound {
		namespace midi {
			namespace spi {

void MidiFileReader::init$() {
}

MidiFileReader::MidiFileReader() {
}

$Class* MidiFileReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(MidiFileReader, init$, void)},
		{"getMidiFileFormat", "(Ljava/io/InputStream;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiFileReader, getMidiFileFormat, $MidiFileFormat*, $InputStream*), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
		{"getMidiFileFormat", "(Ljava/net/URL;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiFileReader, getMidiFileFormat, $MidiFileFormat*, $URL*), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
		{"getMidiFileFormat", "(Ljava/io/File;)Ljavax/sound/midi/MidiFileFormat;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiFileReader, getMidiFileFormat, $MidiFileFormat*, $File*), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
		{"getSequence", "(Ljava/io/InputStream;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiFileReader, getSequence, $Sequence*, $InputStream*), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
		{"getSequence", "(Ljava/net/URL;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiFileReader, getSequence, $Sequence*, $URL*), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
		{"getSequence", "(Ljava/io/File;)Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiFileReader, getSequence, $Sequence*, $File*), "javax.sound.midi.InvalidMidiDataException,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.midi.spi.MidiFileReader",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MidiFileReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiFileReader);
	});
	return class$;
}

$Class* MidiFileReader::class$ = nullptr;

			} // spi
		} // midi
	} // sound
} // javax