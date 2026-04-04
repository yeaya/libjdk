#include <com/sun/media/sound/SimpleSoundbank.h>
#include <com/sun/media/sound/ModelInstrumentComparator.h>
#include <com/sun/media/sound/ModelPatch.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <jcpp.h>

using $InstrumentArray = $Array<::javax::sound::midi::Instrument>;
using $SoundbankResourceArray = $Array<::javax::sound::midi::SoundbankResource>;
using $ModelInstrumentComparator = ::com::sun::media::sound::ModelInstrumentComparator;
using $ModelPatch = ::com::sun::media::sound::ModelPatch;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $Instrument = ::javax::sound::midi::Instrument;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SimpleSoundbank::init$() {
	$set(this, name, ""_s);
	$set(this, version, ""_s);
	$set(this, vendor, ""_s);
	$set(this, description, ""_s);
	$set(this, resources, $new($ArrayList));
	$set(this, instruments, $new($ArrayList));
}

$String* SimpleSoundbank::getName() {
	return this->name;
}

$String* SimpleSoundbank::getVersion() {
	return this->version;
}

$String* SimpleSoundbank::getVendor() {
	return this->vendor;
}

$String* SimpleSoundbank::getDescription() {
	return this->description;
}

void SimpleSoundbank::setDescription($String* description) {
	$set(this, description, description);
}

void SimpleSoundbank::setName($String* name) {
	$set(this, name, name);
}

void SimpleSoundbank::setVendor($String* vendor) {
	$set(this, vendor, vendor);
}

void SimpleSoundbank::setVersion($String* version) {
	$set(this, version, version);
}

$SoundbankResourceArray* SimpleSoundbank::getResources() {
	return $cast($SoundbankResourceArray, $nc(this->resources)->toArray($$new($SoundbankResourceArray, $nc(this->resources)->size())));
}

$InstrumentArray* SimpleSoundbank::getInstruments() {
	$useLocalObjectStack();
	$var($InstrumentArray, inslist_array, $cast($InstrumentArray, $nc(this->instruments)->toArray($$new($InstrumentArray, $nc(this->resources)->size()))));
	$Arrays::sort(inslist_array, $$new($ModelInstrumentComparator));
	return inslist_array;
}

$Instrument* SimpleSoundbank::getInstrument($Patch* patch) {
	$useLocalObjectStack();
	int32_t program = $nc(patch)->getProgram();
	int32_t bank = patch->getBank();
	bool percussion = false;
	if ($instanceOf($ModelPatch, patch)) {
		percussion = $cast($ModelPatch, patch)->isPercussion();
	}
	{
		$var($Iterator, i$, $nc(this->instruments)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Instrument, instrument, $cast($Instrument, i$->next()));
			{
				$var($Patch, patch2, $nc(instrument)->getPatch());
				int32_t program2 = $nc(patch2)->getProgram();
				int32_t bank2 = patch2->getBank();
				if (program == program2 && bank == bank2) {
					bool percussion2 = false;
					if ($instanceOf($ModelPatch, patch2)) {
						percussion2 = $cast($ModelPatch, patch2)->isPercussion();
					}
					if (percussion == percussion2) {
						return instrument;
					}
				}
			}
		}
	}
	return nullptr;
}

void SimpleSoundbank::addResource($SoundbankResource* resource) {
	if ($instanceOf($Instrument, resource)) {
		$nc(this->instruments)->add($cast($Instrument, resource));
	} else {
		$nc(this->resources)->add(resource);
	}
}

void SimpleSoundbank::removeResource($SoundbankResource* resource) {
	if ($instanceOf($Instrument, resource)) {
		$nc(this->instruments)->remove(resource);
	} else {
		$nc(this->resources)->remove(resource);
	}
}

void SimpleSoundbank::addInstrument($Instrument* resource) {
	$nc(this->instruments)->add(resource);
}

void SimpleSoundbank::removeInstrument($Instrument* resource) {
	$nc(this->instruments)->remove(resource);
}

void SimpleSoundbank::addAllInstruments($Soundbank* soundbank) {
	$useLocalObjectStack();
	$var($InstrumentArray, arr$, $nc(soundbank)->getInstruments());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Instrument, ins, arr$->get(i$));
		addInstrument(ins);
	}
}

void SimpleSoundbank::removeAllInstruments($Soundbank* soundbank) {
	$useLocalObjectStack();
	$var($InstrumentArray, arr$, $nc(soundbank)->getInstruments());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($Instrument, ins, arr$->get(i$));
		removeInstrument(ins);
	}
}

SimpleSoundbank::SimpleSoundbank() {
}

$Class* SimpleSoundbank::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, 0, $field(SimpleSoundbank, name)},
		{"version", "Ljava/lang/String;", nullptr, 0, $field(SimpleSoundbank, version)},
		{"vendor", "Ljava/lang/String;", nullptr, 0, $field(SimpleSoundbank, vendor)},
		{"description", "Ljava/lang/String;", nullptr, 0, $field(SimpleSoundbank, description)},
		{"resources", "Ljava/util/List;", "Ljava/util/List<Ljavax/sound/midi/SoundbankResource;>;", 0, $field(SimpleSoundbank, resources)},
		{"instruments", "Ljava/util/List;", "Ljava/util/List<Ljavax/sound/midi/Instrument;>;", 0, $field(SimpleSoundbank, instruments)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SimpleSoundbank, init$, void)},
		{"addAllInstruments", "(Ljavax/sound/midi/Soundbank;)V", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, addAllInstruments, void, $Soundbank*)},
		{"addInstrument", "(Ljavax/sound/midi/Instrument;)V", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, addInstrument, void, $Instrument*)},
		{"addResource", "(Ljavax/sound/midi/SoundbankResource;)V", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, addResource, void, $SoundbankResource*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, getDescription, $String*)},
		{"getInstrument", "(Ljavax/sound/midi/Patch;)Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, getInstrument, $Instrument*, $Patch*)},
		{"getInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, getInstruments, $InstrumentArray*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, getName, $String*)},
		{"getResources", "()[Ljavax/sound/midi/SoundbankResource;", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, getResources, $SoundbankResourceArray*)},
		{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, getVendor, $String*)},
		{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, getVersion, $String*)},
		{"removeAllInstruments", "(Ljavax/sound/midi/Soundbank;)V", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, removeAllInstruments, void, $Soundbank*)},
		{"removeInstrument", "(Ljavax/sound/midi/Instrument;)V", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, removeInstrument, void, $Instrument*)},
		{"removeResource", "(Ljavax/sound/midi/SoundbankResource;)V", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, removeResource, void, $SoundbankResource*)},
		{"setDescription", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, setDescription, void, $String*)},
		{"setName", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, setName, void, $String*)},
		{"setVendor", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, setVendor, void, $String*)},
		{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(SimpleSoundbank, setVersion, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.media.sound.SimpleSoundbank",
		"java.lang.Object",
		"javax.sound.midi.Soundbank",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SimpleSoundbank, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SimpleSoundbank);
	});
	return class$;
}

$Class* SimpleSoundbank::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com