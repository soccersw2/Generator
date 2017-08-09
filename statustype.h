#ifndef STATUSTYPE_H
#define STATUSTYPE_H


class Status
{
   public:
      enum Type
      {
         NONE,        // GRAY
         OPERATIONAL, // GREEN
         WARNING,     // YELLOW
         ERROR        // RED

      }; // end enum Type

}; // end class Status


#endif

// EOF
