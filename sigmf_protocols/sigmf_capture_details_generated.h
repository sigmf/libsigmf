// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SIGMFCAPTUREDETAILS_CAPTURE_DETAILS_H_
#define FLATBUFFERS_GENERATED_SIGMFCAPTUREDETAILS_CAPTURE_DETAILS_H_

#include "flatbuffers/flatbuffers.h"

namespace capture_details {

struct Global;
struct GlobalBuilder;
struct GlobalT;

struct Capture;
struct CaptureBuilder;
struct CaptureT;

struct Annotation;
struct AnnotationBuilder;
struct AnnotationT;

struct Descr;
struct DescrBuilder;
struct DescrT;

inline const flatbuffers::TypeTable *GlobalTypeTable();

inline const flatbuffers::TypeTable *CaptureTypeTable();

inline const flatbuffers::TypeTable *AnnotationTypeTable();

inline const flatbuffers::TypeTable *DescrTypeTable();

struct GlobalT : public flatbuffers::NativeTable {
  typedef Global TableType;
};

struct Global FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef GlobalT NativeTableType;
  typedef GlobalBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return GlobalTypeTable();
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
  GlobalT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(GlobalT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Global> Pack(flatbuffers::FlatBufferBuilder &_fbb, const GlobalT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct GlobalBuilder {
  typedef Global Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  explicit GlobalBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Global> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Global>(end);
    return o;
  }
};

inline flatbuffers::Offset<Global> CreateGlobal(
    flatbuffers::FlatBufferBuilder &_fbb) {
  GlobalBuilder builder_(_fbb);
  return builder_.Finish();
}

flatbuffers::Offset<Global> CreateGlobal(flatbuffers::FlatBufferBuilder &_fbb, const GlobalT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct CaptureT : public flatbuffers::NativeTable {
  typedef Capture TableType;
  flatbuffers::Optional<double> acq_scale_factor = flatbuffers::nullopt;
  flatbuffers::Optional<double> attentuation = flatbuffers::nullopt;
  flatbuffers::Optional<double> acquisition_bandwidth = flatbuffers::nullopt;
  std::string start_capture{};
  std::string stop_capture{};
  std::string source_file{};
  flatbuffers::Optional<double> gain = flatbuffers::nullopt;
};

struct Capture FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef CaptureT NativeTableType;
  typedef CaptureBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return CaptureTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ACQ_SCALE_FACTOR = 4,
    VT_ATTENTUATION = 6,
    VT_ACQUISITION_BANDWIDTH = 8,
    VT_START_CAPTURE = 10,
    VT_STOP_CAPTURE = 12,
    VT_SOURCE_FILE = 14,
    VT_GAIN = 16
  };
  flatbuffers::Optional<double> acq_scale_factor() const {
    return GetOptional<double, double>(VT_ACQ_SCALE_FACTOR);
  }
  flatbuffers::Optional<double> attentuation() const {
    return GetOptional<double, double>(VT_ATTENTUATION);
  }
  flatbuffers::Optional<double> acquisition_bandwidth() const {
    return GetOptional<double, double>(VT_ACQUISITION_BANDWIDTH);
  }
  const flatbuffers::String *start_capture() const {
    return GetPointer<const flatbuffers::String *>(VT_START_CAPTURE);
  }
  const flatbuffers::String *stop_capture() const {
    return GetPointer<const flatbuffers::String *>(VT_STOP_CAPTURE);
  }
  const flatbuffers::String *source_file() const {
    return GetPointer<const flatbuffers::String *>(VT_SOURCE_FILE);
  }
  flatbuffers::Optional<double> gain() const {
    return GetOptional<double, double>(VT_GAIN);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<double>(verifier, VT_ACQ_SCALE_FACTOR) &&
           VerifyField<double>(verifier, VT_ATTENTUATION) &&
           VerifyField<double>(verifier, VT_ACQUISITION_BANDWIDTH) &&
           VerifyOffset(verifier, VT_START_CAPTURE) &&
           verifier.VerifyString(start_capture()) &&
           VerifyOffset(verifier, VT_STOP_CAPTURE) &&
           verifier.VerifyString(stop_capture()) &&
           VerifyOffset(verifier, VT_SOURCE_FILE) &&
           verifier.VerifyString(source_file()) &&
           VerifyField<double>(verifier, VT_GAIN) &&
           verifier.EndTable();
  }
  CaptureT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(CaptureT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Capture> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CaptureT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct CaptureBuilder {
  typedef Capture Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_acq_scale_factor(double acq_scale_factor) {
    fbb_.AddElement<double>(Capture::VT_ACQ_SCALE_FACTOR, acq_scale_factor);
  }
  void add_attentuation(double attentuation) {
    fbb_.AddElement<double>(Capture::VT_ATTENTUATION, attentuation);
  }
  void add_acquisition_bandwidth(double acquisition_bandwidth) {
    fbb_.AddElement<double>(Capture::VT_ACQUISITION_BANDWIDTH, acquisition_bandwidth);
  }
  void add_start_capture(flatbuffers::Offset<flatbuffers::String> start_capture) {
    fbb_.AddOffset(Capture::VT_START_CAPTURE, start_capture);
  }
  void add_stop_capture(flatbuffers::Offset<flatbuffers::String> stop_capture) {
    fbb_.AddOffset(Capture::VT_STOP_CAPTURE, stop_capture);
  }
  void add_source_file(flatbuffers::Offset<flatbuffers::String> source_file) {
    fbb_.AddOffset(Capture::VT_SOURCE_FILE, source_file);
  }
  void add_gain(double gain) {
    fbb_.AddElement<double>(Capture::VT_GAIN, gain);
  }
  explicit CaptureBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Capture> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Capture>(end);
    return o;
  }
};

inline flatbuffers::Offset<Capture> CreateCapture(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Optional<double> acq_scale_factor = flatbuffers::nullopt,
    flatbuffers::Optional<double> attentuation = flatbuffers::nullopt,
    flatbuffers::Optional<double> acquisition_bandwidth = flatbuffers::nullopt,
    flatbuffers::Offset<flatbuffers::String> start_capture = 0,
    flatbuffers::Offset<flatbuffers::String> stop_capture = 0,
    flatbuffers::Offset<flatbuffers::String> source_file = 0,
    flatbuffers::Optional<double> gain = flatbuffers::nullopt) {
  CaptureBuilder builder_(_fbb);
  if(gain) { builder_.add_gain(*gain); }
  if(acquisition_bandwidth) { builder_.add_acquisition_bandwidth(*acquisition_bandwidth); }
  if(attentuation) { builder_.add_attentuation(*attentuation); }
  if(acq_scale_factor) { builder_.add_acq_scale_factor(*acq_scale_factor); }
  builder_.add_source_file(source_file);
  builder_.add_stop_capture(stop_capture);
  builder_.add_start_capture(start_capture);
  return builder_.Finish();
}

inline flatbuffers::Offset<Capture> CreateCaptureDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Optional<double> acq_scale_factor = flatbuffers::nullopt,
    flatbuffers::Optional<double> attentuation = flatbuffers::nullopt,
    flatbuffers::Optional<double> acquisition_bandwidth = flatbuffers::nullopt,
    const char *start_capture = nullptr,
    const char *stop_capture = nullptr,
    const char *source_file = nullptr,
    flatbuffers::Optional<double> gain = flatbuffers::nullopt) {
  auto start_capture__ = start_capture ? _fbb.CreateString(start_capture) : 0;
  auto stop_capture__ = stop_capture ? _fbb.CreateString(stop_capture) : 0;
  auto source_file__ = source_file ? _fbb.CreateString(source_file) : 0;
  return capture_details::CreateCapture(
      _fbb,
      acq_scale_factor,
      attentuation,
      acquisition_bandwidth,
      start_capture__,
      stop_capture__,
      source_file__,
      gain);
}

flatbuffers::Offset<Capture> CreateCapture(flatbuffers::FlatBufferBuilder &_fbb, const CaptureT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct AnnotationT : public flatbuffers::NativeTable {
  typedef Annotation TableType;
  flatbuffers::Optional<double> SNRdB = flatbuffers::nullopt;
  flatbuffers::Optional<uint64_t> signal_reference_number = flatbuffers::nullopt;
};

struct Annotation FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef AnnotationT NativeTableType;
  typedef AnnotationBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return AnnotationTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SNRDB = 4,
    VT_SIGNAL_REFERENCE_NUMBER = 6
  };
  flatbuffers::Optional<double> SNRdB() const {
    return GetOptional<double, double>(VT_SNRDB);
  }
  flatbuffers::Optional<uint64_t> signal_reference_number() const {
    return GetOptional<uint64_t, uint64_t>(VT_SIGNAL_REFERENCE_NUMBER);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<double>(verifier, VT_SNRDB) &&
           VerifyField<uint64_t>(verifier, VT_SIGNAL_REFERENCE_NUMBER) &&
           verifier.EndTable();
  }
  AnnotationT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(AnnotationT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Annotation> Pack(flatbuffers::FlatBufferBuilder &_fbb, const AnnotationT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct AnnotationBuilder {
  typedef Annotation Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_SNRdB(double SNRdB) {
    fbb_.AddElement<double>(Annotation::VT_SNRDB, SNRdB);
  }
  void add_signal_reference_number(uint64_t signal_reference_number) {
    fbb_.AddElement<uint64_t>(Annotation::VT_SIGNAL_REFERENCE_NUMBER, signal_reference_number);
  }
  explicit AnnotationBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Annotation> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Annotation>(end);
    return o;
  }
};

inline flatbuffers::Offset<Annotation> CreateAnnotation(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Optional<double> SNRdB = flatbuffers::nullopt,
    flatbuffers::Optional<uint64_t> signal_reference_number = flatbuffers::nullopt) {
  AnnotationBuilder builder_(_fbb);
  if(signal_reference_number) { builder_.add_signal_reference_number(*signal_reference_number); }
  if(SNRdB) { builder_.add_SNRdB(*SNRdB); }
  return builder_.Finish();
}

flatbuffers::Offset<Annotation> CreateAnnotation(flatbuffers::FlatBufferBuilder &_fbb, const AnnotationT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct DescrT : public flatbuffers::NativeTable {
  typedef Descr TableType;
  std::unique_ptr<capture_details::GlobalT> global{};
  std::unique_ptr<capture_details::AnnotationT> annotation{};
  std::unique_ptr<capture_details::CaptureT> capture{};
};

struct Descr FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef DescrT NativeTableType;
  typedef DescrBuilder Builder;
  static const flatbuffers::TypeTable *MiniReflectTypeTable() {
    return DescrTypeTable();
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_GLOBAL = 4,
    VT_ANNOTATION = 6,
    VT_CAPTURE = 8
  };
  const capture_details::Global *global() const {
    return GetPointer<const capture_details::Global *>(VT_GLOBAL);
  }
  const capture_details::Annotation *annotation() const {
    return GetPointer<const capture_details::Annotation *>(VT_ANNOTATION);
  }
  const capture_details::Capture *capture() const {
    return GetPointer<const capture_details::Capture *>(VT_CAPTURE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_GLOBAL) &&
           verifier.VerifyTable(global()) &&
           VerifyOffset(verifier, VT_ANNOTATION) &&
           verifier.VerifyTable(annotation()) &&
           VerifyOffset(verifier, VT_CAPTURE) &&
           verifier.VerifyTable(capture()) &&
           verifier.EndTable();
  }
  DescrT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(DescrT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Descr> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DescrT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct DescrBuilder {
  typedef Descr Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_global(flatbuffers::Offset<capture_details::Global> global) {
    fbb_.AddOffset(Descr::VT_GLOBAL, global);
  }
  void add_annotation(flatbuffers::Offset<capture_details::Annotation> annotation) {
    fbb_.AddOffset(Descr::VT_ANNOTATION, annotation);
  }
  void add_capture(flatbuffers::Offset<capture_details::Capture> capture) {
    fbb_.AddOffset(Descr::VT_CAPTURE, capture);
  }
  explicit DescrBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Descr> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Descr>(end);
    return o;
  }
};

inline flatbuffers::Offset<Descr> CreateDescr(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<capture_details::Global> global = 0,
    flatbuffers::Offset<capture_details::Annotation> annotation = 0,
    flatbuffers::Offset<capture_details::Capture> capture = 0) {
  DescrBuilder builder_(_fbb);
  builder_.add_capture(capture);
  builder_.add_annotation(annotation);
  builder_.add_global(global);
  return builder_.Finish();
}

flatbuffers::Offset<Descr> CreateDescr(flatbuffers::FlatBufferBuilder &_fbb, const DescrT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline GlobalT *Global::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<GlobalT>(new GlobalT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Global::UnPackTo(GlobalT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
}

inline flatbuffers::Offset<Global> Global::Pack(flatbuffers::FlatBufferBuilder &_fbb, const GlobalT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateGlobal(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Global> CreateGlobal(flatbuffers::FlatBufferBuilder &_fbb, const GlobalT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const GlobalT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  return capture_details::CreateGlobal(
      _fbb);
}

inline CaptureT *Capture::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<CaptureT>(new CaptureT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Capture::UnPackTo(CaptureT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = acq_scale_factor(); _o->acq_scale_factor = _e; }
  { auto _e = attentuation(); _o->attentuation = _e; }
  { auto _e = acquisition_bandwidth(); _o->acquisition_bandwidth = _e; }
  { auto _e = start_capture(); if (_e) _o->start_capture = _e->str(); }
  { auto _e = stop_capture(); if (_e) _o->stop_capture = _e->str(); }
  { auto _e = source_file(); if (_e) _o->source_file = _e->str(); }
  { auto _e = gain(); _o->gain = _e; }
}

inline flatbuffers::Offset<Capture> Capture::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CaptureT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateCapture(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Capture> CreateCapture(flatbuffers::FlatBufferBuilder &_fbb, const CaptureT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CaptureT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _acq_scale_factor = _o->acq_scale_factor;
  auto _attentuation = _o->attentuation;
  auto _acquisition_bandwidth = _o->acquisition_bandwidth;
  auto _start_capture = _o->start_capture.empty() ? 0 : _fbb.CreateString(_o->start_capture);
  auto _stop_capture = _o->stop_capture.empty() ? 0 : _fbb.CreateString(_o->stop_capture);
  auto _source_file = _o->source_file.empty() ? 0 : _fbb.CreateString(_o->source_file);
  auto _gain = _o->gain;
  return capture_details::CreateCapture(
      _fbb,
      _acq_scale_factor,
      _attentuation,
      _acquisition_bandwidth,
      _start_capture,
      _stop_capture,
      _source_file,
      _gain);
}

inline AnnotationT *Annotation::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<AnnotationT>(new AnnotationT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Annotation::UnPackTo(AnnotationT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = SNRdB(); _o->SNRdB = _e; }
  { auto _e = signal_reference_number(); _o->signal_reference_number = _e; }
}

inline flatbuffers::Offset<Annotation> Annotation::Pack(flatbuffers::FlatBufferBuilder &_fbb, const AnnotationT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateAnnotation(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Annotation> CreateAnnotation(flatbuffers::FlatBufferBuilder &_fbb, const AnnotationT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const AnnotationT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _SNRdB = _o->SNRdB;
  auto _signal_reference_number = _o->signal_reference_number;
  return capture_details::CreateAnnotation(
      _fbb,
      _SNRdB,
      _signal_reference_number);
}

inline DescrT *Descr::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<DescrT>(new DescrT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Descr::UnPackTo(DescrT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = global(); if (_e) _o->global = std::unique_ptr<capture_details::GlobalT>(_e->UnPack(_resolver)); }
  { auto _e = annotation(); if (_e) _o->annotation = std::unique_ptr<capture_details::AnnotationT>(_e->UnPack(_resolver)); }
  { auto _e = capture(); if (_e) _o->capture = std::unique_ptr<capture_details::CaptureT>(_e->UnPack(_resolver)); }
}

inline flatbuffers::Offset<Descr> Descr::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DescrT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateDescr(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Descr> CreateDescr(flatbuffers::FlatBufferBuilder &_fbb, const DescrT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DescrT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _global = _o->global ? CreateGlobal(_fbb, _o->global.get(), _rehasher) : 0;
  auto _annotation = _o->annotation ? CreateAnnotation(_fbb, _o->annotation.get(), _rehasher) : 0;
  auto _capture = _o->capture ? CreateCapture(_fbb, _o->capture.get(), _rehasher) : 0;
  return capture_details::CreateDescr(
      _fbb,
      _global,
      _annotation,
      _capture);
}

inline const flatbuffers::TypeTable *GlobalTypeTable() {
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 0, nullptr, nullptr, nullptr, nullptr, nullptr
  };
  return &tt;
}

inline const flatbuffers::TypeTable *CaptureTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_DOUBLE, 0, -1 },
    { flatbuffers::ET_DOUBLE, 0, -1 },
    { flatbuffers::ET_DOUBLE, 0, -1 },
    { flatbuffers::ET_STRING, 0, -1 },
    { flatbuffers::ET_STRING, 0, -1 },
    { flatbuffers::ET_STRING, 0, -1 },
    { flatbuffers::ET_DOUBLE, 0, -1 }
  };
  static const char * const names[] = {
    "acq_scale_factor",
    "attentuation",
    "acquisition_bandwidth",
    "start_capture",
    "stop_capture",
    "source_file",
    "gain"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 7, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *AnnotationTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_DOUBLE, 0, -1 },
    { flatbuffers::ET_ULONG, 0, -1 }
  };
  static const char * const names[] = {
    "SNRdB",
    "signal_reference_number"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 2, type_codes, nullptr, nullptr, nullptr, names
  };
  return &tt;
}

inline const flatbuffers::TypeTable *DescrTypeTable() {
  static const flatbuffers::TypeCode type_codes[] = {
    { flatbuffers::ET_SEQUENCE, 0, 0 },
    { flatbuffers::ET_SEQUENCE, 0, 1 },
    { flatbuffers::ET_SEQUENCE, 0, 2 }
  };
  static const flatbuffers::TypeFunction type_refs[] = {
    capture_details::GlobalTypeTable,
    capture_details::AnnotationTypeTable,
    capture_details::CaptureTypeTable
  };
  static const char * const names[] = {
    "global",
    "annotation",
    "capture"
  };
  static const flatbuffers::TypeTable tt = {
    flatbuffers::ST_TABLE, 3, type_codes, type_refs, nullptr, nullptr, names
  };
  return &tt;
}

}  // namespace capture_details

#endif  // FLATBUFFERS_GENERATED_SIGMFCAPTUREDETAILS_CAPTURE_DETAILS_H_