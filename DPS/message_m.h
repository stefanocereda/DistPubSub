//
// Generated file, do not edit! Created by nedtool 5.0 from message.msg.
//

#ifndef __MESSAGE_M_H
#define __MESSAGE_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
	#include <map>
	typedef std::vector<std::map<int, int>> ts_map_dict;
// }}

/**
 * Class generated from <tt>message.msg:8</tt> by nedtool.
 * <pre>
 * message Message_msg
 * {
 *     int topic = -1;
 *     ts_map_dict ts_struct;
 *     int senderId = -1;
 * }
 * </pre>
 */
class Message_msg : public ::omnetpp::cMessage
{
  protected:
    int topic;
    ts_map_dict ts_struct;
    int senderId;

  private:
    void copy(const Message_msg& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Message_msg&);

  public:
    Message_msg(const char *name=nullptr, int kind=0);
    Message_msg(const Message_msg& other);
    virtual ~Message_msg();
    Message_msg& operator=(const Message_msg& other);
    virtual Message_msg *dup() const {return new Message_msg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual int getTopic() const;
    virtual void setTopic(int topic);
    virtual ts_map_dict& getTs_struct();
    virtual const ts_map_dict& getTs_struct() const {return const_cast<Message_msg*>(this)->getTs_struct();}
    virtual void setTs_struct(const ts_map_dict& ts_struct);
    virtual int getSenderId() const;
    virtual void setSenderId(int senderId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Message_msg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Message_msg& obj) {obj.parsimUnpack(b);}


#endif // ifndef __MESSAGE_M_H

