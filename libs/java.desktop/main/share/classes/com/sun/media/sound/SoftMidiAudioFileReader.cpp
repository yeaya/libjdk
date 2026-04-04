#include <com/sun/media/sound/SoftMidiAudioFileReader.h>
#include <com/sun/media/sound/AudioSynthesizer.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <com/sun/media/sound/StandardFileFormat.h>
#include <com/sun/media/sound/SunFileReader.h>
#include <java/io/EOFException.h>
#include <java/io/InputStream.h>
#include <java/util/Map.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/MidiEvent.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/MidiSystem.h>
#include <javax/sound/midi/MidiUnavailableException.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/Track.h>
#include <javax/sound/sampled/AudioFileFormat$Type.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioInputStream.h>
#include <javax/sound/sampled/UnsupportedAudioFileException.h>
#include <jcpp.h>

#undef MIDI
#undef PPQ

using $TrackArray = $Array<::javax::sound::midi::Track>;
using $AudioSynthesizer = ::com::sun::media::sound::AudioSynthesizer;
using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $StandardFileFormat = ::com::sun::media::sound::StandardFileFormat;
using $SunFileReader = ::com::sun::media::sound::SunFileReader;
using $EOFException = ::java::io::EOFException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiEvent = ::javax::sound::midi::MidiEvent;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $MidiSystem = ::javax::sound::midi::MidiSystem;
using $MidiUnavailableException = ::javax::sound::midi::MidiUnavailableException;
using $Receiver = ::javax::sound::midi::Receiver;
using $Sequence = ::javax::sound::midi::Sequence;
using $Track = ::javax::sound::midi::Track;
using $AudioFileFormat$Type = ::javax::sound::sampled::AudioFileFormat$Type;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioInputStream = ::javax::sound::sampled::AudioInputStream;
using $UnsupportedAudioFileException = ::javax::sound::sampled::UnsupportedAudioFileException;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$AudioFileFormat$Type* SoftMidiAudioFileReader::MIDI = nullptr;
$AudioFormat* SoftMidiAudioFileReader::format = nullptr;

void SoftMidiAudioFileReader::init$() {
	$SunFileReader::init$();
}

$StandardFileFormat* SoftMidiAudioFileReader::getAudioFileFormat($Sequence* seq) {
	$init(SoftMidiAudioFileReader);
	int64_t totallen = $nc(seq)->getMicrosecondLength() / 1000000;
	int64_t len = $cast(int64_t, (SoftMidiAudioFileReader::format->getFrameRate() * (totallen + 4)));
	return $new($StandardFileFormat, SoftMidiAudioFileReader::MIDI, SoftMidiAudioFileReader::format, len);
}

$AudioInputStream* SoftMidiAudioFileReader::getAudioInputStream($Sequence* seq) {
	$useLocalObjectStack();
	$var($AudioSynthesizer, synth, $new($SoftSynthesizer));
	$var($AudioInputStream, stream, nullptr);
	$var($Receiver, recv, nullptr);
	try {
		$assign(stream, synth->openStream(SoftMidiAudioFileReader::format, nullptr));
		$assign(recv, synth->getReceiver());
	} catch ($MidiUnavailableException& e) {
		$throwNew($InvalidMidiDataException, $(e->toString()));
	}
	float divtype = $nc(seq)->getDivisionType();
	$var($TrackArray, tracks, seq->getTracks());
	$var($ints, trackspos, $new($ints, $nc(tracks)->length));
	int32_t mpq = 500000;
	int32_t seqres = seq->getResolution();
	int64_t lasttick = 0;
	int64_t curtime = 0;
	while (true) {
		$var($MidiEvent, selevent, nullptr);
		int32_t seltrack = -1;
		for (int32_t i = 0; i < tracks->length; ++i) {
			int32_t trackpos = trackspos->get(i);
			$var($Track, track, tracks->get(i));
			if (trackpos < $nc(track)->size()) {
				$var($MidiEvent, event, track->get(trackpos));
				bool var$0 = selevent == nullptr;
				if (!var$0) {
					int64_t var$1 = $nc(event)->getTick();
					var$0 = var$1 < selevent->getTick();
				}
				if (var$0) {
					$assign(selevent, event);
					seltrack = i;
				}
			}
		}
		if (seltrack == -1) {
			break;
		}
		++(*trackspos)[seltrack];
		int64_t tick = $nc(selevent)->getTick();
		if (divtype == $Sequence::PPQ) {
			curtime += $div(((tick - lasttick) * mpq), seqres);
		} else {
			curtime = $cast(int64_t, ((tick * 1000000.0 * divtype) / seqres));
		}
		lasttick = tick;
		$var($MidiMessage, msg, selevent->getMessage());
		if ($instanceOf($MetaMessage, msg)) {
			if (divtype == $Sequence::PPQ) {
				if ($cast($MetaMessage, msg)->getType() == 81) {
					$var($bytes, data, $cast($MetaMessage, msg)->getData());
					if ($nc(data)->length < 3) {
						$throwNew($InvalidMidiDataException);
					}
					mpq = (((data->get(0) & 0xff) << 16) | ((data->get(1) & 0xff) << 8)) | (data->get(2) & 0xff);
				}
			}
		} else {
			$nc(recv)->send(msg, curtime);
		}
	}
	int64_t totallen = curtime / 1000000;
	int64_t len = $cast(int64_t, ($$nc($nc(stream)->getFormat())->getFrameRate() * (totallen + 4)));
	$assign(stream, $new($AudioInputStream, stream, $(stream->getFormat()), len));
	return stream;
}

$AudioInputStream* SoftMidiAudioFileReader::getAudioInputStream($InputStream* stream) {
	$nc(stream)->mark(200);
	try {
		return getAudioInputStream($($MidiSystem::getSequence(stream)));
	} catch ($InvalidMidiDataException& ignored) {
		stream->reset();
		$throwNew($UnsupportedAudioFileException);
	} catch ($EOFException& ignored) {
		stream->reset();
		$throwNew($UnsupportedAudioFileException);
	}
	$shouldNotReachHere();
}

$StandardFileFormat* SoftMidiAudioFileReader::getAudioFileFormatImpl($InputStream* stream) {
	try {
		return getAudioFileFormat($($MidiSystem::getSequence(stream)));
	} catch ($InvalidMidiDataException& ignored) {
		$throwNew($UnsupportedAudioFileException);
	}
	$shouldNotReachHere();
}

void SoftMidiAudioFileReader::clinit$($Class* clazz) {
	$assignStatic(SoftMidiAudioFileReader::MIDI, $new($AudioFileFormat$Type, "MIDI"_s, "mid"_s));
	$assignStatic(SoftMidiAudioFileReader::format, $new($AudioFormat, 0x0000ac44, 16, 2, true, false));
}

SoftMidiAudioFileReader::SoftMidiAudioFileReader() {
}

$Class* SoftMidiAudioFileReader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MIDI", "Ljavax/sound/sampled/AudioFileFormat$Type;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SoftMidiAudioFileReader, MIDI)},
		{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SoftMidiAudioFileReader, format)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SoftMidiAudioFileReader, init$, void)},
		{"getAudioFileFormat", "(Ljavax/sound/midi/Sequence;)Lcom/sun/media/sound/StandardFileFormat;", nullptr, $PRIVATE | $STATIC, $staticMethod(SoftMidiAudioFileReader, getAudioFileFormat, $StandardFileFormat*, $Sequence*)},
		{"getAudioFileFormatImpl", "(Ljava/io/InputStream;)Lcom/sun/media/sound/StandardFileFormat;", nullptr, 0, $virtualMethod(SoftMidiAudioFileReader, getAudioFileFormatImpl, $StandardFileFormat*, $InputStream*), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
		{"getAudioInputStream", "(Ljavax/sound/midi/Sequence;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PRIVATE, $method(SoftMidiAudioFileReader, getAudioInputStream, $AudioInputStream*, $Sequence*), "javax.sound.midi.InvalidMidiDataException"},
		{"getAudioInputStream", "(Ljava/io/InputStream;)Ljavax/sound/sampled/AudioInputStream;", nullptr, $PUBLIC, $virtualMethod(SoftMidiAudioFileReader, getAudioInputStream, $AudioInputStream*, $InputStream*), "javax.sound.sampled.UnsupportedAudioFileException,java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftMidiAudioFileReader",
		"com.sun.media.sound.SunFileReader",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SoftMidiAudioFileReader, name, initialize, &classInfo$$, SoftMidiAudioFileReader::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SoftMidiAudioFileReader);
	});
	return class$;
}

$Class* SoftMidiAudioFileReader::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com