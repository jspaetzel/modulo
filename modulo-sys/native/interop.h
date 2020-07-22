typedef enum FieldType {
  ROW,
  LABEL,
  TEXT,
  CHOICE,
  CHECKBOX,
} FieldType;

typedef struct LabelMetadata {
  const char *text;
} LabelMetadata;

typedef struct TextMetadata {
  const char *defaultText;
  const int multiline;
} TextMetadata;

typedef enum ChoiceType {
  DROPDOWN,
  LIST,
} ChoiceType;

typedef struct ChoiceMetadata {
  const char * const * values;
  const int valueSize;
  const ChoiceType choiceType;
} ChoiceMetadata;

typedef struct FieldMetadata {
  const char * id;
  FieldType fieldType;
  const void * specific;
} FieldMetadata;

typedef struct RowMetadata {
  const FieldMetadata *fields;
  const int fieldSize;
} RowMetadata;

typedef struct FormMetadata {
  const char *windowTitle;
  const FieldMetadata *fields;
  const int fieldSize;
} FormMetadata;

typedef struct ValuePair {
  const char *id;
  const char *value;
} ValuePair;