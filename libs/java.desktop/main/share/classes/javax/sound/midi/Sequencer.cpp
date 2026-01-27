#include <javax/sound/midi/Sequencer.h>

#include <java/io/InputStream.h>
#include <javax/sound/midi/ControllerEventListener.h>
#include <javax/sound/midi/MetaEventListener.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/Sequencer$SyncMode.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

#undef LOOP_CONTINUOUSLY

using $Sequencer$SyncModeArray = $Array<::javax::sound::midi::Sequencer$SyncMode>;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ControllerEventListener = ::javax::sound::midi::ControllerEventListener;
using $MetaEventListener = ::javax::sound::midi::MetaEventListener;
using $Sequence = ::javax::sound::midi::Sequence;
using $Sequencer$SyncMode = ::javax::sound::midi::Sequencer$SyncMode;
using $Track = ::javax::sound::midi::Track;

namespace javax {
	namespace sound {
		namespace midi {

$FieldInfo _Sequencer_FieldInfo_[] = {
	{"LOOP_CONTINUOUSLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Sequencer, LOOP_CONTINUOUSLY)},
	{}
};

$MethodInfo _Sequencer_MethodInfo_[] = {
	{"addControllerEventListener", "(Ljavax/sound/midi/ControllerEventListener;[I)[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, addControllerEventListener, $ints*, $ControllerEventListener*, $ints*)},
	{"addMetaEventListener", "(Ljavax/sound/midi/MetaEventListener;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, addMetaEventListener, bool, $MetaEventListener*)},
	{"getLoopCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getLoopCount, int32_t)},
	{"getLoopEndPoint", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getLoopEndPoint, int64_t)},
	{"getLoopStartPoint", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getLoopStartPoint, int64_t)},
	{"getMasterSyncMode", "()Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getMasterSyncMode, $Sequencer$SyncMode*)},
	{"getMasterSyncModes", "()[Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getMasterSyncModes, $Sequencer$SyncModeArray*)},
	{"getMicrosecondLength", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getMicrosecondLength, int64_t)},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"getSequence", "()Ljavax/sound/midi/Sequence;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getSequence, $Sequence*)},
	{"getSlaveSyncMode", "()Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getSlaveSyncMode, $Sequencer$SyncMode*)},
	{"getSlaveSyncModes", "()[Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getSlaveSyncModes, $Sequencer$SyncModeArray*)},
	{"getTempoFactor", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getTempoFactor, float)},
	{"getTempoInBPM", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getTempoInBPM, float)},
	{"getTempoInMPQ", "()F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getTempoInMPQ, float)},
	{"getTickLength", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getTickLength, int64_t)},
	{"getTickPosition", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getTickPosition, int64_t)},
	{"getTrackMute", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getTrackMute, bool, int32_t)},
	{"getTrackSolo", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, getTrackSolo, bool, int32_t)},
	{"isRecording", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, isRecording, bool)},
	{"isRunning", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, isRunning, bool)},
	{"recordDisable", "(Ljavax/sound/midi/Track;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, recordDisable, void, $Track*)},
	{"recordEnable", "(Ljavax/sound/midi/Track;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, recordEnable, void, $Track*, int32_t)},
	{"removeControllerEventListener", "(Ljavax/sound/midi/ControllerEventListener;[I)[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, removeControllerEventListener, $ints*, $ControllerEventListener*, $ints*)},
	{"removeMetaEventListener", "(Ljavax/sound/midi/MetaEventListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, removeMetaEventListener, void, $MetaEventListener*)},
	{"setLoopCount", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setLoopCount, void, int32_t)},
	{"setLoopEndPoint", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setLoopEndPoint, void, int64_t)},
	{"setLoopStartPoint", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setLoopStartPoint, void, int64_t)},
	{"setMasterSyncMode", "(Ljavax/sound/midi/Sequencer$SyncMode;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setMasterSyncMode, void, $Sequencer$SyncMode*)},
	{"setMicrosecondPosition", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setMicrosecondPosition, void, int64_t)},
	{"setSequence", "(Ljavax/sound/midi/Sequence;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setSequence, void, $Sequence*), "javax.sound.midi.InvalidMidiDataException"},
	{"setSequence", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setSequence, void, $InputStream*), "java.io.IOException,javax.sound.midi.InvalidMidiDataException"},
	{"setSlaveSyncMode", "(Ljavax/sound/midi/Sequencer$SyncMode;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setSlaveSyncMode, void, $Sequencer$SyncMode*)},
	{"setTempoFactor", "(F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setTempoFactor, void, float)},
	{"setTempoInBPM", "(F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setTempoInBPM, void, float)},
	{"setTempoInMPQ", "(F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setTempoInMPQ, void, float)},
	{"setTickPosition", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setTickPosition, void, int64_t)},
	{"setTrackMute", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setTrackMute, void, int32_t, bool)},
	{"setTrackSolo", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, setTrackSolo, void, int32_t, bool)},
	{"start", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, start, void)},
	{"startRecording", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, startRecording, void)},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, stop, void)},
	{"stopRecording", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Sequencer, stopRecording, void)},
	{}
};

$InnerClassInfo _Sequencer_InnerClassesInfo_[] = {
	{"javax.sound.midi.Sequencer$SyncMode", "javax.sound.midi.Sequencer", "SyncMode", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Sequencer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.Sequencer",
	nullptr,
	"javax.sound.midi.MidiDevice",
	_Sequencer_FieldInfo_,
	_Sequencer_MethodInfo_,
	nullptr,
	nullptr,
	_Sequencer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.sound.midi.Sequencer$SyncMode"
};

$Object* allocate$Sequencer($Class* clazz) {
	return $of($alloc(Sequencer));
}

$Class* Sequencer::load$($String* name, bool initialize) {
	$loadClass(Sequencer, name, initialize, &_Sequencer_ClassInfo_, allocate$Sequencer);
	return class$;
}

$Class* Sequencer::class$ = nullptr;

		} // midi
	} // sound
} // javax