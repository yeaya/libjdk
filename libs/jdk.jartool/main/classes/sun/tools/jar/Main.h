#ifndef _sun_tools_jar_Main_h_
#define _sun_tools_jar_Main_h_
//$ class sun.tools.jar.Main
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASE_VERSION")
#undef BASE_VERSION
#pragma push_macro("ENTRYNAME_COMPARATOR")
#undef ENTRYNAME_COMPARATOR
#pragma push_macro("ENTRY_COMPARATOR")
#undef ENTRY_COMPARATOR
#pragma push_macro("MANIFEST_DIR")
#undef MANIFEST_DIR
#pragma push_macro("MODULE_INFO")
#undef MODULE_INFO
#pragma push_macro("VERSION")
#undef VERSION
#pragma push_macro("VERSIONS_DIR")
#undef VERSIONS_DIR
#pragma push_macro("VERSIONS_DIR_LENGTH")
#undef VERSIONS_DIR_LENGTH

namespace java {
	namespace io {
		class File;
		class FileInputStream;
		class InputStream;
		class OutputStream;
		class PrintStream;
		class PrintWriter;
	}
}
namespace java {
	namespace lang {
		class Exception;
		class Integer;
		class StringBuilder;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleDescriptor$Exports;
			class ModuleDescriptor$Opens;
			class ModuleDescriptor$Provides;
			class ModuleDescriptor$Requires;
			class ModuleDescriptor$Version;
			class ModuleFinder;
		}
	}
}
namespace java {
	namespace util {
		class Collection;
		class Comparator;
		class HashSet;
		class List;
		class Map;
		class Map$Entry;
		class ResourceBundle;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}
namespace java {
	namespace util {
		namespace jar {
			class Manifest;
		}
	}
}
namespace java {
	namespace util {
		namespace regex {
			class Pattern;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
			class ZipFile;
			class ZipOutputStream;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashes;
			class ModuleResolution;
			class ModuleTarget;
		}
	}
}
namespace jdk {
	namespace internal {
		namespace util {
			namespace jar {
				class JarIndex;
			}
		}
	}
}
namespace sun {
	namespace tools {
		namespace jar {
			class Main$Entry;
			class Main$ModuleInfoEntry;
			class Main$ZipFileModuleInfoEntry;
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class $export Main : public ::java::lang::Object {
	$class(Main, 0, ::java::lang::Object)
public:
	Main();
	void init$(::java::io::PrintStream* out, ::java::io::PrintStream* err, $String* program);
	void init$(::java::io::PrintWriter* out, ::java::io::PrintWriter* err, $String* program);
	void addCreatedBy(::java::util::jar::Manifest* m);
	void addExtendedModuleAttributes(::java::util::Map* moduleInfos, ::java::util::Set* packages);
	virtual void addFile(::java::util::zip::ZipOutputStream* zos, ::sun::tools::jar::Main$Entry* entry);
	void addIndex(::jdk::internal::util::jar::JarIndex* index, ::java::util::zip::ZipOutputStream* zos);
	void addMainClass(::java::util::jar::Manifest* m, $String* mainApp);
	void addMultiRelease(::java::util::jar::Manifest* m);
	virtual void addPackageIfNamed(::java::util::Set* packages, $String* name);
	void addVersion(::java::util::jar::Manifest* m);
	bool checkModuleInfo($bytes* moduleInfoBytes, ::java::util::Set* entries);
	void copy(::java::io::InputStream* from, ::java::io::OutputStream* to);
	void copy(::java::io::File* from, ::java::io::OutputStream* to);
	void copy(::java::io::InputStream* from, ::java::io::File* to);
	void crc32File(::java::util::zip::ZipEntry* e, ::java::io::File* f);
	void crc32Manifest(::java::util::zip::ZipEntry* e, ::java::util::jar::Manifest* m);
	void crc32ModuleInfo(::java::util::zip::ZipEntry* e, $bytes* bytes);
	virtual void create(::java::io::OutputStream* out, ::java::util::jar::Manifest* manifest);
	static ::java::io::File* createTempFileInSameDirectoryAs(::java::io::File* file);
	::java::io::File* createTemporaryFile($String* tmpbase, $String* suffix);
	bool describeModule(::java::util::zip::ZipFile* zipFile);
	void describeModule(::java::io::InputStream* entryInputStream, $String* uriString);
	void describeModule(::java::lang::module::ModuleDescriptor* md, ::jdk::internal::module::ModuleTarget* target, ::jdk::internal::module::ModuleHashes* hashes, $String* uriString);
	bool describeModuleFromEntries($Array<::sun::tools::jar::Main$ModuleInfoEntry>* infos);
	bool describeModuleFromStream(::java::io::FileInputStream* fis);
	virtual void dumpIndex($String* rootjar, ::jdk::internal::util::jar::JarIndex* index);
	bool equalsIgnoreCase($String* s, $String* upper);
	virtual void error($String* s);
	void expand();
	void expand(::java::io::File* dir, $StringArray* files, ::java::util::Set* cpaths, int32_t version);
	$bytes* extendedInfoBytes(::java::lang::module::ModuleDescriptor* md, $bytes* miBytes, ::java::util::Set* packages);
	virtual bool extract(::java::io::InputStream* in, $StringArray* files);
	virtual void extract($String* fname, $StringArray* files);
	virtual ::java::util::zip::ZipEntry* extractFile(::java::io::InputStream* is, ::java::util::zip::ZipEntry* e);
	virtual void fatalError(::java::lang::Exception* e);
	virtual void fatalError($String* s);
	$StringArray* filesMapToFiles(::java::util::Map* filesMap);
	virtual ::java::util::stream::Stream* filesToEntryNames(::java::util::Map$Entry* fileEntries);
	static $String* formatMsg($String* key, $String* arg);
	static $String* formatMsg2($String* key, $String* arg, $String* arg1);
	virtual void genIndex($String* rootjar, $StringArray* files);
	virtual ::java::util::List* getJarPath($String* jar);
	static $String* getMsg($String* key);
	static int32_t intVersionFromEntry(::sun::tools::jar::Main$ModuleInfoEntry* entry);
	bool isAmbiguousMainClass(::java::util::jar::Manifest* m);
	static bool isModuleInfoEntry($String* name);
	static bool isWinDriveLetter(char16_t c);
	static bool lambda$checkModuleInfo$25(::java::util::Set* entries, $String* p);
	void lambda$checkModuleInfo$26($String* p);
	static bool lambda$describeModule$13(::java::lang::module::ModuleDescriptor$Exports* e);
	static void lambda$describeModule$14(::java::lang::StringBuilder* sb, ::java::lang::module::ModuleDescriptor$Exports* e);
	static void lambda$describeModule$15(::java::lang::StringBuilder* sb, ::java::lang::module::ModuleDescriptor$Requires* r);
	static void lambda$describeModule$16(::java::lang::StringBuilder* sb, $String* s);
	static void lambda$describeModule$17(::java::lang::StringBuilder* sb, ::java::lang::module::ModuleDescriptor$Provides* p);
	static void lambda$describeModule$18(::java::lang::StringBuilder* sb, ::java::lang::module::ModuleDescriptor$Exports* e);
	static bool lambda$describeModule$19(::java::lang::module::ModuleDescriptor$Opens* o);
	static void lambda$describeModule$20(::java::lang::StringBuilder* sb, ::java::lang::module::ModuleDescriptor$Opens* o);
	static void lambda$describeModule$21(::java::lang::StringBuilder* sb, ::java::lang::module::ModuleDescriptor$Opens* o);
	static void lambda$describeModule$22(::java::lang::StringBuilder* sb, $String* p);
	static void lambda$describeModule$23(::java::lang::StringBuilder* sb, $String* v);
	static void lambda$describeModule$24(::java::lang::StringBuilder* sb, ::jdk::internal::module::ModuleHashes* hashes, $String* mod);
	static bool lambda$describeModule$6(::java::util::zip::ZipEntry* e);
	static ::sun::tools::jar::Main$ZipFileModuleInfoEntry* lambda$describeModule$7(::java::util::zip::ZipFile* zipFile, ::java::util::zip::ZipEntry* e);
	static $Array<::sun::tools::jar::Main$ZipFileModuleInfoEntry>* lambda$describeModule$8(int32_t x$0);
	static bool lambda$describeModuleFromEntries$10(::sun::tools::jar::Main$ModuleInfoEntry* e);
	static $Array<::sun::tools::jar::Main$ModuleInfoEntry>* lambda$describeModuleFromStream$9(int32_t x$0);
	static $StringArray* lambda$filesMapToFiles$2(int32_t x$0);
	$String* lambda$filesToEntryNames$3(::java::util::Set* cpaths, int32_t version, $String* f);
	static void lambda$replaceFSC$5(::java::util::Map* filesMap, ::java::lang::Integer* version);
	static bool lambda$run$0(::sun::tools::jar::Main$Entry* e);
	void lambda$run$1(::java::util::Set* packages, ::java::util::Set* jentries, ::sun::tools::jar::Main$Entry* e);
	static int32_t lambda$static$27($String* s1, $String* s2);
	static $String* lambda$toLowerCaseString$11(Object$* e);
	static $String* lambda$toString$12(Object$* e);
	void lambda$update$4(::java::util::Set* pkgs, $String* je);
	bool lessThanEqualReleaseValue(::sun::tools::jar::Main$ModuleInfoEntry* entry);
	virtual void list(::java::io::InputStream* in, $StringArray* files);
	virtual void list($String* fname, $StringArray* files);
	static void main($StringArray* args);
	virtual ::java::util::Set* newDirSet();
	virtual void output($String* s);
	virtual bool parseArgs($StringArray* args);
	virtual void printEntry(::java::util::zip::ZipEntry* e, $StringArray* files);
	virtual void printEntry(::java::util::zip::ZipEntry* e);
	virtual void replaceFSC(::java::util::Map* filesMap);
	virtual bool run($StringArray* args);
	$String* safeName($String* name);
	static $String* toBinaryName($String* classname);
	$String* toEntryName($String* name, ::java::util::Set* cpaths, bool isDir);
	static $String* toHex($bytes* ba);
	static $String* toLowerCaseString(::java::util::Collection* set);
	static $String* toPackageName($String* path);
	using ::java::lang::Object::toString;
	static $String* toString(::java::util::Collection* set);
	char16_t toUpperCaseASCII(char16_t c);
	static $String* toVersionedName($String* name, int32_t version);
	virtual bool update(::java::io::InputStream* in, ::java::io::OutputStream* out, ::java::io::InputStream* newManifest, ::java::util::Map* moduleInfos, ::jdk::internal::util::jar::JarIndex* jarIndex);
	virtual void updateLastModifiedTime(::java::util::Set* zes);
	bool updateManifest(::java::util::jar::Manifest* m, ::java::util::zip::ZipOutputStream* zos);
	void updateModuleInfo(::java::util::Map* moduleInfos, ::java::util::zip::ZipOutputStream* zos);
	virtual void usageError($String* s);
	void validateAndClose(::java::io::File* tmpfile);
	bool validateJar(::java::io::File* file);
	static $String* versionFromEntryName($String* name);
	virtual void warn($String* s);
	static bool $assertionsDisabled;
	$String* program = nullptr;
	::java::io::PrintWriter* out = nullptr;
	::java::io::PrintWriter* err = nullptr;
	$String* fname = nullptr;
	$String* mname = nullptr;
	$String* ename = nullptr;
	$String* zname = nullptr;
	$String* rootjar = nullptr;
	static const int32_t BASE_VERSION = 0;
	::java::util::Map* entryMap = nullptr;
	::java::util::Set* entries = nullptr;
	::java::util::Map* moduleInfos = nullptr;
	::java::util::Map* pathsMap = nullptr;
	::java::util::Map* filesMap = nullptr;
	bool isMultiRelease = false;
	int32_t releaseValue = 0;
	bool cflag = false;
	bool uflag = false;
	bool xflag = false;
	bool tflag = false;
	bool vflag = false;
	bool flag0 = false;
	bool Mflag = false;
	bool iflag = false;
	bool pflag = false;
	bool dflag = false;
	bool validate = false;
	bool suppressDeprecateMsg = false;
	::java::util::function::Consumer* info = nullptr;
	::java::lang::module::ModuleDescriptor$Version* moduleVersion = nullptr;
	::java::util::regex::Pattern* modulesToHash = nullptr;
	::jdk::internal::module::ModuleResolution* moduleResolution = nullptr;
	::java::lang::module::ModuleFinder* moduleFinder = nullptr;
	static $String* MODULE_INFO;
	static $String* MANIFEST_DIR;
	static $String* VERSIONS_DIR;
	static $String* VERSION;
	static int32_t VERSIONS_DIR_LENGTH;
	static ::java::util::ResourceBundle* rsrc;
	static bool useExtractionTime;
	bool ok = false;
	$bytes* copyBuf = nullptr;
	::java::util::HashSet* jarPaths = nullptr;
	static ::java::util::Comparator* ENTRYNAME_COMPARATOR;
	static ::java::util::Comparator* ENTRY_COMPARATOR;
};

		} // jar
	} // tools
} // sun

#pragma pop_macro("BASE_VERSION")
#pragma pop_macro("ENTRYNAME_COMPARATOR")
#pragma pop_macro("ENTRY_COMPARATOR")
#pragma pop_macro("MANIFEST_DIR")
#pragma pop_macro("MODULE_INFO")
#pragma pop_macro("VERSION")
#pragma pop_macro("VERSIONS_DIR")
#pragma pop_macro("VERSIONS_DIR_LENGTH")

#endif // _sun_tools_jar_Main_h_